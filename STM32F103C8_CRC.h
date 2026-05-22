/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_CRC_h
#define STM32F103C8_CRC_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*CRC*/
//CRC基地址常量定义
#define CRC_BASE 0x40023000
//NVIC基地址定义
#define CRC ((Typedef_CRC*)CRC_BASE)
//NVIC结构体定义
typedef struct
{
    volatile uint32_t CRC_DR;
    volatile uint32_t CRC_IDR;
    volatile uint32_t CRC_CR;
}Typedef_CRC;

//CRC_DR
/*数据寄存器位 
写入CRC计算器的新数据时，作为输入寄存器 
读取时返回CRC计算的结果 */

//CRC_IDR
/*通用8位数据寄存器位 
可用于临时存放1字节的数据。 
寄存器CRC_CR的RESET位产生的CRC复位对本寄存器没有影响*/

//CRC_CR
//RESET位 复位CRC计算单元，设置数据寄存器为0xFFFF FFFF
#define CRC_CR_Config_RESET 0x00000001

#endif