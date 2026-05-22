/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_BKP_h
#define STM32F103C8_BKP_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*BKP部分定义*/
//AFIO基地址常量定义
#define BKP_BASE 0x40006C00
//AFIO基地址定义
#define BKP ((Typedef_BKP *)BKP_BASE)
typedef struct
{
    volatile uint32_t Reseverd1;
    volatile uint32_t BKP_DR1;
    volatile uint32_t BKP_DR2;
    volatile uint32_t BKP_DR3;
    volatile uint32_t BKP_DR4;
    volatile uint32_t BKP_DR5;
    volatile uint32_t BKP_DR6;
    volatile uint32_t BKP_DR7;
    volatile uint32_t BKP_DR8;
    volatile uint32_t BKP_DR9;
    volatile uint32_t BKP_DR10;
    volatile uint32_t BKP_RTCCR;
    volatile uint32_t RTC_CR;
    volatile uint32_t RTC_CSR;
    volatile uint32_t Reseverd2[2];
    volatile uint32_t BKP_DR11;
    volatile uint32_t BKP_DR12;
    volatile uint32_t BKP_DR13;
    volatile uint32_t BKP_DR14;
    volatile uint32_t BKP_DR15;
    volatile uint32_t BKP_DR16;
    volatile uint32_t BKP_DR17;
    volatile uint32_t BKP_DR18;
    volatile uint32_t BKP_DR19;
    volatile uint32_t BKP_DR20;
    volatile uint32_t BKP_DR21;
    volatile uint32_t BKP_DR22;
    volatile uint32_t BKP_DR23;
    volatile uint32_t BKP_DR24;
    volatile uint32_t BKP_DR25;
    volatile uint32_t BKP_DR26;
    volatile uint32_t BKP_DR27;
    volatile uint32_t BKP_DR28;
    volatile uint32_t BKP_DR29;
    volatile uint32_t BKP_DR30;
    volatile uint32_t BKP_DR31;
    volatile uint32_t BKP_DR32;
    volatile uint32_t BKP_DR33;
    volatile uint32_t BKP_DR34;
    volatile uint32_t BKP_DR36;
    volatile uint32_t BKP_DR37;
    volatile uint32_t BKP_DR38;
    volatile uint32_t BKP_DR39;
    volatile uint32_t BKP_DR40;
    volatile uint32_t BKP_DR41;
    volatile uint32_t BKP_DR42;
}Typedef_BKP;

//x(BKP_DRx) (x = 1 … 10)
//这些位可以被用来写入用户数据。 
//注意：BKP_DRx寄存器不会被系统复位、电源复位、从待机模式唤醒所复位。 
//它们可以由备份域复位来复位或(如果侵入检测引脚TAMPER功能被开启时)由侵入引脚事件复
//位。 

//BKP_RTCCR
//CAL[6:0]：校准值(Calibration value)
//校准值表示在每220个时钟脉冲内将有多少个时钟脉冲被跳过。这可以用来对RTC进行校准，以
//1000000/220ppm的比例减慢时钟。 
//校准时钟输出(Calibration clock output) 
#define BKP_RTCCR_Config_Calibration_clock_output 0x00000080
//校准时钟输出(Calibration clock output) 
#define BKP_RTCCR_Config_Calibration_clock_output 0x00000100
//Alarm or second output selection
#define BKP_RTCCR_Config_Alarm_or_second_output_selection 0x00000200

//BKP_CR
//TPE：启动侵入检测TAMPER引脚(TAMPER pin enable) 
#define BKP_CR_Config_TAMPER_pin_enable 0x00000001
//TPAL：侵入检测TAMPER引脚有效电平(TAMPER pin active level)
#define BKP_CR_Config_TAMPER_pin_active_level 0x00000002

//BKP_CSR
//Clear tamper event
#define BKP_CSR_Config_Clear_tamper_event 0x00000001
//Clear tamper interrupt
#define BKP_CSR_Config_Clear_tamper_interrupt 0x00000002
//TAMPER pin interrupt enable
#define BKP_CSR_Config_TAMPER_pin_interrupt_enable 0x00000004
//Tamper event flag
#define BKP_CSR_flag_Tamper_event_flag 0x00000100
//Tamper interrupt flag
#define BKP_CSR_flag_Tamper_interrupt_flag 0x00000200

#endif