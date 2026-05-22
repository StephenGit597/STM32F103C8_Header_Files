/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_PWR_h
#define STM32F103C8_PWR_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*PWR*/
//PWR基地址常量定义
#define PWR_BASE 0x40007000 
//PWR基地址定义
#define PWR ((Typedef_PWR*)PWR_BASE)
//PWR结构体定义
typedef struct
{
    volatile uint32_t PWR_CR;
    volatile uint32_t PWR_CSR;
}Typedef_PWR;

//PWR_CR
//LPDS：深睡眠下的低功耗 
#define PWR_CR_Config_LPDS 0x00000001
//PDDS：掉电深睡眠 
#define PWR_CR_Config_PDDS 0x00000002
//CWUF：清除唤醒位 
#define PWR_CR_Config_CWUF 0x00000004
//CSBF：清除待机位 
#define PWR_CR_Config_CSBF 0x00000008
//PVDE：电源电压监测器(PVD)使能
#define PWR_CR_Config_PVDE 0x00000010
//PLS[2:0]：PVD电平选择 
#define PWR_CR_Config_PVD_2_2_V 0x00000000
#define PWR_CR_Config_PVD_2_3_V 0x00000020
#define PWR_CR_Config_PVD_2_4_V 0x00000040
#define PWR_CR_Config_PVD_2_5_V 0x00000060
#define PWR_CR_Config_PVD_2_6_V 0x00000080
#define PWR_CR_Config_PVD_2_7_V 0x000000A0
#define PWR_CR_Config_PVD_2_8_V 0x000000C0
#define PWR_CR_Config_PVD_2_9_V 0x000000E0
//DBP：取消后备区域的写保护
#define PWR_CR_Config_DBP 0x00000100

//PWR_CSR
//WUF：唤醒标志 
#define PWR_CSR_flag_WUF 0x00000001
//SBF：待机标志
#define PWR_CSR_flag_SBF 0x00000002
//PVDO：PVD输出
#define PWR_CSR_config_PVDO 0x00000004
//EWUP：使能WKUP引脚 
#define PWR_CSR_config_EWUP 0x00000100

#endif