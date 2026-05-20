/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_USART_h
#define STM32F103C8_USART_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

//串口寄存器
//USART基地址常量定义
#define USART1_BASE 0x40013800
#define USART2_BASE 0x40004400
#define USART3_BASE 0x40004800
//USART基地址定义
#define USART1 ((Typedef_USART *)USART1_BASE)
#define USART2 ((Typedef_USART *)USART2_BASE)
#define USART3 ((Typedef_USART *)USART3_BASE)
//串口结构体定义
typedef struct
{
	uint32_t SR;     //偏移量0x00 Status Register
	uint32_t DR;     //偏移量0x04 Data Register
	uint32_t BRR;    //偏移量0x08 Baud Rate Register
	uint32_t CR1;    //偏移量0x0C Control Register 1
	uint32_t CR2;    //偏移量0x10 Control Register 2
	uint32_t CR3;    //偏移量0x14 Control Register 3
	uint32_t GTPR;   //偏移量0x18 Guard Time and Prescaler Register
}Typedef_USART;

#endif