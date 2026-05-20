/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_watchdog_h
#define STM32F103C8_watchdog_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*watchdog部分定义*/
//watchdog基地址常量定义
#define watchdog_BASE 0x40002C00
//watchdog基地址定义
#define watchdog ((Typedef_watchdog *)watchdog_BASE)
typedef struct
{
    volatile uint32_t WWDG_CR;
    volatile uint32_t WWDG_CFR;
    volatile uint32_t WWDG_SR;
}Typedef_watchdog;

//watchdog_control_register
//T[6:0]: 7位计数器(MSB至LSB) (7-bit counter) 
//这些位用来存储看门狗的计数器值。每(4096x2WDGTB)个PCLK1周期减1。当计数器值从40h变为3Fh时(T6变成0)，产生看门狗复位。
//WDGA: 激活位 (Activation bit) 此位由软件置'1',但仅能由硬件在复位后清'0'。当WDGA=1时,看门狗可以产生复位。
#define watchdog_control_register_Activation_bit 0x00000080

//watchdog_connfiguation_register
//W[6:0]: 7位窗口值 (7-bit window value) 位6:0 这些位包含了用来与递减计数器进行比较用的窗口值。
//WDGTB[1:0]: 时基 (Timer base)
#define watchdog_connfiguation_register_PCLK1_divide_4096_1 0x00000000
#define watchdog_connfiguation_register_PCLK1_divide_4096_2 0x00000080
#define watchdog_connfiguation_register_PCLK1_divide_4096_3 0x00000100
#define watchdog_connfiguation_register_PCLK1_divide_4096_4 0x00000180
//EWI: 提前唤醒中断 (Early wakeup interrupt) 此位若置'1',则当计数器值达到40h,即产生中断
#define watchdog_connfiguation_register_Early wakeup interrupt 0x00000200

//watchdog_statas_register
//EWIF: 提前唤醒中断标志 (Early wakeup interrupt flag)
//当计数器值达到40h时,此位由硬件置'1'。它必须通过软件写'0'来清除。对此位写'1'无效。若中断未被使能,此位也会被置'1'。
#define watchdog_statas_register_Early_wakeup_interrupt_flag 0x00000001

#endif