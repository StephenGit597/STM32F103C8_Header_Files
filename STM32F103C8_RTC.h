/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_RTC_h
#define STM32F103C8_RTC_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*RTC部分定义*/
//RTC基地址常量定义
#define RTC_BASE 0x40002800
//RTC基地址定义
#define RTC ((Typedef_RTC *)RTC_BASE)
typedef struct
{
    volatile uint32_t RTC_CRH;
    volatile uint32_t RTC_CRL;
    volatile uint32_t RTC_PRLH;
    volatile uint32_t RTC_PRLL;
    volatile uint32_t RTC_DIVH;
    volatile uint32_t RTC_DIVL;
    volatile uint32_t RTC_CNTH;
    volatile uint32_t RTC_CNTL;
    volatile uint32_t RTC_ALRH;
    volatile uint32_t RTC_ALRL;
}Typedef_RTC;

//RTC_CRH
//SECIE：允许秒中断 (Second interrupt enable)
#define RTC_CRH_Config_Second_interrupt_enable 0x00000001
//ALRIE：允许闹钟中断 (Alarm interrupt enable)
#define RTC_CRH_Config_Alarm_interrupt_enable 0x00000002
//OWIE：允许溢出中断位 (Overflow interrupt enable) 
#define RTC_CRH_Config_Overflow_interrupt_enable 0x00000004

//RTC_CRL
//Second flag
#define RTC_CRL_Flag_Second_flag 0x00000001
//Alarm flag
#define RTC_CRL_Flag_Alarm_flag 0x00000002
//Overflow flag
#define RTC_CRL_Flag_Overflow_flag 0x00000004
//Registers synchronized flag
#define RTC_CRL_Flag_Registers_synchronized_flag 0x00000008
//Configuration flag
#define RTC_CRL_Flag_Configuration_flag 0x00000010
//RTC operation OFF
#define RTC_CRL_Flag_RTC_operation_OFF 0x00000020

//RTC_PRLH
//PRL[19:16]：RTC预分频装载值高位 (RTC prescaler reload value high) 
//TR_CLK = fRTCCLK/(PRL[19:0]+1) 
//注：不推荐使用0值，否则无法正确的产生RTC中断和标志位。

//RTC_PRLL
//PRL[15:0]：RTC预分频装载值低位
//根据以下公式，这些位用来定义计数器的时钟频率： 
//fTR_CLK = fRTCCLK/(PRL[19:0]+1) 
//注：不推荐使用0值，否则无法正确的产生RTC中断和标志位。

//RTC_DIVH
//RTC_DIV[19:16]：RTC时钟分频器余数高位 (RTC clock divider high)

//RTC_DIVL
//RTC_DIV[19:16]：RTC时钟分频器余数高位 (RTC clock divider high)

//RTC_CNTH
//RTC_CNT[31:16]：RTC计数器高位 (RTC counter high) 位15:0 
//可通过读RTC_CNTH寄存器来获得RTC计数器当前值的高位部分。要对此寄存器进行写操作
//前，必须先进入配置模式

//RTC_CNTL
//RTC_CNT[15:0]：RTC计数器低位。
//可通过读RTC_CNTL寄存器来获得RTC计数器当前值的低位部分。要对此寄存器进行写操作，
//必须先进入配置模式

//RTC_ALRH
//RTC_ALR[31:16]：RTC闹钟值高位 (RTC alarm high) 

//RTC_ALRL
//RTC_ALR[15:0]：RTC闹钟值低位 (RTC alarm low) 

#endif