/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_FLASH_h
#define STM32F103C8_FLASH_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*FLASH部分定义*/
//FLASH基地址常量定义
#define FLASH_BASE 0x40022000
//FLASH基地址定义
#define FLASH ((Typedef_FLASH *)FLASH_BASE)
typedef struct
{
    volatile uint32_t ACR;
    volatile uint32_t KEYR;
    volatile uint32_t OPTKEYR;
    volatile uint32_t SR;
    volatile uint32_t CR;
    volatile uint32_t AR;
    volatile uint32_t OBR;
    volatile uint32_t WRPR;
}Typedef_FLASH;

//Flash Access Control Register
//设置FLASH等待周期
#define FLASH_Config_ACR_Latency_0 0x00000000
#define FLASH_Config_ACR_Latency_1 0x00000001
#define FLASH_Config_ACR_Latency_2 0x00000002
//FLASH half cycle assess enable
#define FLASH_Config_ACR_FLASH_half_cycle_assess_enable 0x00000008
//Prefetch Buffer Enable
#define FLASH_Config_ACR_Prefetch_Buffer_Enable 0x00000010
//Prefetch Buffer status
#define FLASH_Flag_ACR_Prefetch_Buffer_status 0x00000020

//FPEC Key Register
//FLASH Key Register

//Option Byte Key Register
//Option Byte Key

//Flash Status Register
//Busy
#define FLASH_SR_Flag_Busy 0x00000001
//Programming error
#define FLASH_SR_Flag_Programming_error 0x00000004
//Write Protection error
#define FLASH_SR_Flag_Write_Protection_error 0x00000010
//End of operation
FLASH_SR_Flag_End_of_operation 0x00000020

//Flash Control Register
//Programming
#define FLASH_CR_config_Programming 0x00000001
//Page Erase
#define FLASH_CR_config_Page_Erase 0x00000002
//Mass Erase
#define FLASH_CR_config_Mass_Erase 0x00000004
//Option Byte Programming
#define FLASH_CR_config_Option_Byte_Programming 0x00000010
//Option Byte Erase
#define FLASH_CR_config_Option_Byte_Erase 0x00000020
//Start
#define FLASH_CR_config_Start 0x00000040
//Lock 
#define FLASH_CR_config_Lock 0x00000080
//Option Byte Write Enable
#define FLASH_CR_config_Option_Byte_Write_Enable 0x00000200
//Erorr Interrupt Enable
#define FLASH_CR_config_Erorr_Interrupt_Enable 0x00000400
//End of operation Interrupt Enable
#define FLASH_CR_config_End_of_operation_Interrupt_Enable 0x00001000

//Flash Address Register
//Flash Address

//Option Byte Register
//Option Byte Erorr
#define FLASH_OBR_Option Byte Erorr 0x00000001
//Read Protection
#define FLASH_OBR_Read_Protection 0x00000002
//WDG_SW
#define FLASH_OBR_WDG_SW 0x00000004
//nRST_STOP
#define FLASH_OBR_nRST_STOP 0x00000008
//nRST_STDBY
#define FLASH_OBR_nRST_STDBY 0x00000010
//Data0 bit17-bit10
//Data1 bit25-bit18

//Write Protection Register
//Write Protection

#endif