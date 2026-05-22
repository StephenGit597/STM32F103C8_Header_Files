/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_i_watchdog_h
#define STM32F103C8_i_watchdog_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*i_watchdog*/
//i_watchdog基地址常量定义
#define i_watchdog_BASE 0x40003000
//i_watchdog基地址定义
#define i_watchdog ((Typedef_i_watchdog*)i_watchdog_BASE)
//i_watchdog结构体定义
typedef struct
{
    volatile uint32_t IWDG_KR;
    volatile uint32_t IWDG_PR;
    volatile uint32_t IWDG_RLR;
    volatile uint32_t IWDG_SR;
};

//IWDG_KR
/*键值(只写寄存器，读出值为0x0000) (Key value) 位15:0 
软件必须以一定的间隔写入0xAAAA，否则，当计数器为0时，看门狗会产生复位。 
写入0x5555表示允许访问IWDG_PR和IWDG_RLR寄存器。(见17.3.2节) 
写入0xCCCC，启动看门狗工作(若选择了硬件看门狗则不受此命令字限制)*/

//IWDG_PR
//PR[2:0]: 预分频因子 (Prescaler divider) 
#define IWDG_PR_Config_Prescaler_divider_4 0x00000000
#define IWDG_PR_Config_Prescaler_divider_8 0x00000001
#define IWDG_PR_Config_Prescaler_divider_16 0x00000002
#define IWDG_PR_Config_Prescaler_divider_32 0x00000003
#define IWDG_PR_Config_Prescaler_divider_64 0x00000004
#define IWDG_PR_Config_Prescaler_divider_128 0x00000005
#define IWDG_PR_Config_Prescaler_divider_256 0x00000006

//IWDG_PR
//RL[11:0]: 看门狗计数器重装载值 (Watchdog counter reload value) 

//IWDG_SR
//PVU: 看门狗预分频值更新 (Watchdog prescaler value update) 
#define IWDG_SR_flag_Watchdog_prescaler_value_update 0x00000001
//RVU: 看门狗计数器重装载值更新 (Watchdog counter reload value update) 
#define IWDG_SR_flag_Watchdog_counter_reload_value_update 0x00000002

#endif