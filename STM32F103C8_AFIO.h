/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_AFIO_h
#define STM32F103C8_AFIO_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*AFIO部分定义*/
//AFIO基地址常量定义
#define AFIO_BASE 0x40010000
//AFIO基地址定义
#define AFIO ((Typedef_AFIO *)AFIO_BASE)
typedef struct
{
	volatile uint32_t EVCR;      //偏移量0x00 Event Control Register
	volatile uint32_t MAPR;      //偏移量0x04 Remap and Debug
	volatile uint32_t EXTICR[4]; //偏移量0x08 EXTI Configuration Registers
}Typedef_AFIO;

//Event Control Register
//Pin_Seletion
#define AFIO_Event_Control_Register_Pin_Seletion_0 0x00000000
#define AFIO_Event_Control_Register_Pin_Seletion_1 0x00000001
#define AFIO_Event_Control_Register_Pin_Seletion_2 0x00000002
#define AFIO_Event_Control_Register_Pin_Seletion_3 0x00000003
#define AFIO_Event_Control_Register_Pin_Seletion_4 0x00000004
#define AFIO_Event_Control_Register_Pin_Seletion_5 0x00000005
#define AFIO_Event_Control_Register_Pin_Seletion_6 0x00000006
#define AFIO_Event_Control_Register_Pin_Seletion_7 0x00000007
#define AFIO_Event_Control_Register_Pin_Seletion_8 0x00000008
#define AFIO_Event_Control_Register_Pin_Seletion_9 0x00000009
#define AFIO_Event_Control_Register_Pin_Seletion_10 0x0000000A
#define AFIO_Event_Control_Register_Pin_Seletion_11 0x0000000B
#define AFIO_Event_Control_Register_Pin_Seletion_12 0x0000000C
#define AFIO_Event_Control_Register_Pin_Seletion_13 0x0000000D
#define AFIO_Event_Control_Register_Pin_Seletion_14 0x0000000E
#define AFIO_Event_Control_Register_Pin_Seletion_15 0x0000000F
//Port_Seletion
#define AFIO_Event_Control_Register_Port_Seletion_A 0x00000000
#define AFIO_Event_Control_Register_Port_Seletion_B 0x00000010
#define AFIO_Event_Control_Register_Port_Seletion_C 0x00000020

//Remap and Debug
//SPI1
#define AFIO_Remap_and_Debug_SPI1_Remap_Enable 0x00000001
//I2C1
#define AFIO_Remap_and_Debug_I2C1_Remap_Enable 0x00000002
//USART1
#define AFIO_Remap_and_Debug_USART1_Remap_Enable 0x00000004
//USART2
#define AFIO_Remap_and_Debug_USART2_Remap_Enable 0x00000008
//USART3
#define AFIO_Remap_and_Debug_USART3_Remap_Disable 0x00000000
#define AFIO_Remap_and_Debug_USART3_Partial_Remap_Enable 0x00000010
#define AFIO_Remap_and_Debug_USART3_Full_Remap_Enable 0x00000030
//TIM1
#define AFIO_Remap_and_Debug_TIM1_Remap_Disable 0x00000000
#define AFIO_Remap_and_Debug_TIM1_Partial_Remap_Enable 0x00000040
#define AFIO_Remap_and_Debug_TIM1_Full_Remap_Enable 0x000000C0
//TIM2
#define AFIO_Remap_and_Debug_TIM2_Remap_Disable 0x00000000
#define AFIO_Remap_and_Debug_TIM2_Partial1_Remap_Enable 0x00000100
#define AFIO_Remap_and_Debug_TIM2_Partial2_Remap_Enable 0x00000200
#define AFIO_Remap_and_Debug_TIM2_Full_Remap_Enable 0x00000300
//TIM3
#define AFIO_Remap_and_Debug_TIM3_Remap_Disable 0x00000000
#define AFIO_Remap_and_Debug_TIM3_Partial_Remap_Enable 0x00000800
#define AFIO_Remap_and_Debug_TIM3_Full_Remap_Enable 0x00000C00
//TIM4
#define AFIO_Remap_and_Debug_TIM4_Remap_Enable 0x00001000
//CAN1
#define AFIO_Remap_and_Debug_CAN1_Remap_Disable 0x00000000
#define AFIO_Remap_and_Debug_CAN1_Partial_Remap_Enable 0x00004000
#define AFIO_Remap_and_Debug_CAN1_Full_Remap_Enable 0x00006000
//PD01
#define AFIO_Remap_and_Debug_PD01_Remap_Enable 0x00008000
//ADC1_ETRGINJ
#define AFIO_Remap_and_Debug_ADC1_ETRGINJ_Remap_Enable 0x00010000
//ADC1_ETRGREG
#define AFIO_Remap_and_Debug_ADC1_ETRGREG_Remap_Enable 0x00020000
//ADC2_ETRGINJ
#define AFIO_Remap_and_Debug_ADC2_ETRGINJ_Remap_Enable 0x00040000
//ADC2_ETRGREG
#define AFIO_Remap_and_Debug_ADC2_ETRGREG_Remap_Enable 0x00080000
//SWJ_CFG
#define AFIO_Remap_and_Debug_SWJ_CFG_Remap_Enable 0x00100000
//SWJ_CFG[2:0]:串行线JTAG配置
#define AFIO_Remap_and_Debug_Full_SWJReset_State 0x00000000
#define AFIO_Remap_and_Debug_Full_SWJwithout_NJTRST 0x01000000
#define AFIO_Remap_and_Debug_JTAG_DP_Disabled_and_SW_DP_Enabled 0x02000000
#define AFIO_Remap_and_Debug_JTAG_DP_Disabled_and_SW_DP_Disabled 0x04000000

//EXTI Configuration Registers
//EXTI Configuration Register1
#define AFIO_EXTI_Configuration_Register1_PA0 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB0 0x00000001
#define AFIO_EXTI_Configuration_Register1_PC0 0x00000002
#define AFIO_EXTI_Configuration_Register1_PA1 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB1 0x00000010
#define AFIO_EXTI_Configuration_Register1_PC1 0x00000020
#define AFIO_EXTI_Configuration_Register1_PA2 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB2 0x00000100
#define AFIO_EXTI_Configuration_Register1_PC2 0x00000200
#define AFIO_EXTI_Configuration_Register1_PA3 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB3 0x00001000
#define AFIO_EXTI_Configuration_Register1_PC3 0x00002000
//EXTI Configuration Register2
#define AFIO_EXTI_Configuration_Register2_PA4 0x00000000
#define AFIO_EXTI_Configuration_Register2_PB4 0x00000001
#define AFIO_EXTI_Configuration_Register2_PC4 0x00000002
#define AFIO_EXTI_Configuration_Register2_PA5 0x00000000
#define AFIO_EXTI_Configuration_Register2_PB5 0x00000010
#define AFIO_EXTI_Configuration_Register2_PC5 0x00000020
#define AFIO_EXTI_Configuration_Register2_PA6 0x00000000
#define AFIO_EXTI_Configuration_Register2_PB6 0x00000100
#define AFIO_EXTI_Configuration_Register2_PC6 0x00000200
#define AFIO_EXTI_Configuration_Register2_PA7 0x00000000
#define AFIO_EXTI_Configuration_Register2_PB7 0x00001000
#define AFIO_EXTI_Configuration_Register2_PC7 0x00002000
//EXTI Configuration Register3
#define AFIO_EXTI_Configuration_Register3_PA8 0x00000000
#define AFIO_EXTI_Configuration_Register3_PB8 0x00000001
#define AFIO_EXTI_Configuration_Register3_PC8 0x00000002
#define AFIO_EXTI_Configuration_Register3_PA9 0x00000000
#define AFIO_EXTI_Configuration_Register3_PB9 0x00000010
#define AFIO_EXTI_Configuration_Register3_PC9 0x00000020
#define AFIO_EXTI_Configuration_Register3_PA10 0x00000000
#define AFIO_EXTI_Configuration_Register3_PB10 0x00000100
#define AFIO_EXTI_Configuration_Register3_PC10 0x00000200
#define AFIO_EXTI_Configuration_Register3_PA11 0x00000000
#define AFIO_EXTI_Configuration_Register3_PB11 0x00001000
#define AFIO_EXTI_Configuration_Register3_PC11 0x00002000
//EXTI Configuration Register4
#define AFIO_EXTI_Configuration_Register1_PA12 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB12 0x00000001
#define AFIO_EXTI_Configuration_Register1_PC12 0x00000002
#define AFIO_EXTI_Configuration_Register1_PA13 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB13 0x00000010
#define AFIO_EXTI_Configuration_Register1_PC13 0x00000020
#define AFIO_EXTI_Configuration_Register1_PA14 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB14 0x00000100
#define AFIO_EXTI_Configuration_Register1_PC14 0x00000200
#define AFIO_EXTI_Configuration_Register1_PA15 0x00000000
#define AFIO_EXTI_Configuration_Register1_PB15 0x00001000
#define AFIO_EXTI_Configuration_Register1_PC15 0x00002000

#endif