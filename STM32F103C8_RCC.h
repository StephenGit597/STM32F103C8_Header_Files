/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_RCC_h
#define STM32F103C8_RCC_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*RCC时钟树*/
//RCC基地址常量定义
#define RCC_BASE 0x40021000
//RCC基地址定义
#define RCC ((Typedef_RCC *)RCC_BASE)
typedef struct
{
	volatile uint32_t RCC_CR;      //偏移量0x00 Clock Control Register
	volatile uint32_t RCC_CFGR;    //偏移量0x04 Clock Configuration Register
	volatile uint32_t RCC_CIR;     //偏移量0x08 Clock Interrupt Register
	volatile uint32_t RCC_APB2RSTR;//偏移量0x0C APB2 Peripheral Reset Register
	volatile uint32_t RCC_APB1RSTR;//偏移量0x10 APB1 Peripheral Reset Register
	volatile uint32_t RCC_AHBENR;  //偏移量0x14 AHB Peripheral Clock Enable Register
	volatile uint32_t RCC_APB2ENR; //偏移量0x18 APB2 Peripheral Clock Enable Register
	volatile uint32_t RCC_APB1ENR; //偏移量0x1C APB1 Peripheral Clock Enable Register
	volatile uint32_t RCC_BDCR;    //偏移量0x20 Backup Domain Control Register
	volatile uint32_t RCC_CSR;     //偏移量0x24 Control/Status Register
}Typedef_RCC;

//RCC_CR
//bit2 bit3 bit4 bit5 bit6 bit7 HSITRIM[5:0] HSI校正
//bit8 bit9 bit10 bit11 bit12 bit13 bit14 bit15 HSICAL[7:0] 校准值读取
//HSI HSE PLL配置
#define RCC_CR_Config_CR_HSION 0x00000001
#define RCC_CR_Flag_CR_HSIRDY 0x00000002
#define RCC_CR_Config_CR_HSEON 0x00010000
#define RCC_CR_Flag_CR_HSERDY 0x00020000
#define RCC_CR_Config_CR_HSEBYP 0x00040000
#define RCC_CR_Config_CR_CSSON 0x00080000
#define RCC_CR_Config_CR_PLLON 0x01000000
#define RCC_CR_Flag_CR_PLLRDY 0x02000000

//Clock Configuration Register
//系统时钟源配置
#define RCC_CFGR_Config_Sysclk_HSI 0x00000000 
#define RCC_CFGR_Config_Sysclk_HSE 0x00000001
#define RCC_CFGR_Config_Sysclk_PLL 0x00000002
//当前时钟状态
#define RCC_CFGR_Flag_Sysclk_HSI 0x00000000
#define RCC_CFGR_Flag_Sysclk_HSE 0x00000004
#define RCC_CFGR_Flag_Sysclk_PLL 0x00000008
//AHB分频
#define RCC_CFGR_Config_AHB_PRE_0 0x00000000
#define RCC_CFGR_Config_AHB_PRE_2 0x00000080
#define RCC_CFGR_Config_AHB_PRE_4 0x00000090
#define RCC_CFGR_Config_AHB_PRE_8 0x000000A0
#define RCC_CFGR_Config_AHB_PRE_16 0x000000B0
#define RCC_CFGR_Config_AHB_PRE_64 0x000000C0
#define RCC_CFGR_Config_AHB_PRE_128 0x000000D0
#define RCC_CFGR_Config_AHB_PRE_256 0x000000E0
#define RCC_CFGR_Config_AHB_PRE_512 0x000000F0
//APB1分频
#define RCC_CFGR_Config_APB1_PRE_0 0x00000000
#define RCC_CFGR_Config_APB1_PRE_2 0x00000400
#define RCC_CFGR_Config_APB1_PRE_4 0x00000500
#define RCC_CFGR_Config_APB1_PRE_8 0x00000600
#define RCC_CFGR_Config_APB1_PRE_16 0x00000700
//APB2分频
#define RCC_CFGR_Config_APB2_PRE_0 0x00000800
#define RCC_CFGR_Config_APB2_PRE_2 0x00002000
#define RCC_CFGR_Config_APB2_PRE_4 0x00002800
#define RCC_CFGR_Config_APB2_PRE_8 0x00003000
#define RCC_CFGR_Config_APB2_PRE_16 0x00003800
//ADC 分频
#define RCC_CFGR_Config_ADC_PRE_2 0x00000000
#define RCC_CFGR_Config_ADC_PRE_4 0x00004000
#define RCC_CFGR_Config_ADC_PRE_6 0x00008000
#define RCC_CFGR_Config_ADC_PRE_8 0x0000C000
//PLLSRC
#define RCC_CFGR_Config_PLLSRC_HSI 0x00000000
#define RCC_CFGR_Config_PLLSRC_HSE 0x00010000
//PLLXTPRE
#define RCC_CFGR_Config_PLLXTPRE_HSE 0x00000000
#define RCC_CFGR_Config_PLLXTPRE_HSE_divide_2 0x00020000
//PLL倍频系数
#define RCC_CFGR_Config_PLLMUL_2 0x00000000
#define RCC_CFGR_Config_PLLMUL_3 0x00040000
#define RCC_CFGR_Config_PLLMUL_4 0x00080000
#define RCC_CFGR_Config_PLLMUL_5 0x000C0000
#define RCC_CFGR_Config_PLLMUL_6 0x00100000
#define RCC_CFGR_Config_PLLMUL_7 0x00140000
#define RCC_CFGR_Config_PLLMUL_8 0x00180000
#define RCC_CFGR_Config_PLLMUL_9 0x001C0000
#define RCC_CFGR_Config_PLLMUL_10 0x00200000
#define RCC_CFGR_Config_PLLMUL_11 0x00240000
#define RCC_CFGR_Config_PLLMUL_12 0x00280000
#define RCC_CFGR_Config_PLLMUL_13 0x002C000
#define RCC_CFGR_Config_PLLMUL_14 0x00300000
#define RCC_CFGR_Config_PLLMUL_16 0x00380000
//PA8时钟输出
#define RCC_CFGR_Config_PA8_None 0x00000000
#define RCC_CFGR_Config_PA8_SYSCLK 0x04000000
#define RCC_CFGR_Config_PA8_HSI 0x05000000
#define RCC_CFGR_Config_PA8_HSE 0x06000000
#define RCC_CFGR_Config_PA8_PLLCLK_divide_2 0x07000000

//RCC_CIR
#define RCC_CIR_Flag_LSIRDYF 0x00000001
#define RCC_CIR_Flag_LSERDYF 0x00000002
#define RCC_CIR_Flag_HSIRDYF 0x00000004
#define RCC_CIR_Flag_HSERDYF 0x00000008
#define RCC_CIR_Flag_PLLRDYF 0x00000010
#define RCC_CIR_Flag_CSSF 0x00000020
#define RCC_Config_Flag_LSIRDYIE 0x00000100
#define RCC_Config_Flag_LSERDYIE 0x00000200
#define RCC_Config_Flag_HSIRDYIE 0x00000400
#define RCC_Config_Flag_HSERDYIE 0x00000800
#define RCC_Config_Flag_PLLRDYIE 0x00001000
#define RCC_Config_Flag_CSSIE 0x00002000
#define RCC_Config_Flag_LSIRDYC 0x00010000
#define RCC_Config_Flag_LSERDYC 0x00020000
#define RCC_Config_Flag_HSIRDYC 0x00040000
#define RCC_Config_Flag_HSERDYC 0x00080000
#define RCC_Config_Flag_PLLRDYC 0x00100000
#define RCC_Config_Flag_CSSC 0x01000000

//APB2 Peripheral Reset Register
#define RCC_APB2RSTR_Config_AFIO_RESTE 0x00000001
#define RCC_APB2RSTR_Config_GPIOA_RESET 0x00000004
#define RCC_APB2RSTR_Config_GPIOB_RESET 0x00000008
#define RCC_APB2RSTR_Config_GPIOC_RESET 0x00000010
#define RCC_APB2RSTR_Config_ADC1_RESET 0x00000200
#define RCC_APB2RSTR_Config_ADC2_RESET 0x00000400
#define RCC_APB2RSTR_Config_TIM1_RESET 0x00000800
#define RCC_APB2RSTR_Config_SPI1_RESET 0x00001000
#define RCC_APB2RSTR_Config_USART1_RESET 0x00004000

//APB1 Peripheral Reset Register
#define RCC_APB1RSTR_Config_TIM2_RESTE 0x00000001
#define RCC_APB1RSTR_Config_TIM3_RESTE 0x00000002
#define RCC_APB1RSTR_Config_TIM4_RESTE 0x00000004
#define RCC_APB1RSTR_Config_WWDF_RESTE 0x00000800
#define RCC_APB1RSTR_Config_SPI2_RESTE 0x00004000
#define RCC_APB1RSTR_Config_USART2_RESTE 0x00020000
#define RCC_APB1RSTR_Config_USART3_RESTE 0x00040000
#define RCC_APB1RSTR_Config_I2C1_RESTE 0x00200000
#define RCC_APB1RSTR_Config_I2C2_RESTE 0x00400000
#define RCC_APB1RSTR_Config_CAN1RST 0x08000000
#define RCC_APB1RSTR_Config_BKPRST 0x02000000
#define RCC_APB1RSTR_Config_PERRST 0x10000000
#define RCC_APB1RSTR_Config_DACRST 0x20000000

//AHB Peripheral Clock Enable Register
#define RCC_AHBENR_Config_DMA1EN 0x00000001
#define RCC_AHBENR_Config_SRAMEN 0x00000004
#define RCC_AHBENR_Config_FLITFEN 0x00000010
#define RCC_AHBENR_Config_CRCEN 0x00000040
#define RCC_AHBENR_Config_FSMCEN 0x00000100
#define RCC_AHBENR_Config_SDIOEN 0x00000400

//APB2 Peripheral Clock Enable Register
#define RCC_APB2ENR_Config_AFIO_EN 0x00000001
#define RCC_APB2ENR_Config_GPIOA_EN 0x00000004
#define RCC_APB2ENR_Config_GPIOB_EN 0x00000008
#define RCC_APB2ENR_Config_GPIOC_EN 0x00000010
#define RCC_APB2ENR_Config_ADC1_EN 0x00000200
#define RCC_APB2ENR_Config_ADC2_EN 0x00000400
#define RCC_APB2ENR_Config_TIM1_EN 0x00000800
#define RCC_APB2ENR_Config_SPI1_EN 0x00001000
#define RCC_APB2ENR_Config_USART1_EN 0x00004000

//APB1 Peripheral Clock Enable Register
#define RCC_APB1ENR_Config_TIM2_EN 0x00000001
#define RCC_APB1ENR_Config_TIM3_EN 0x00000002
#define RCC_APB1ENR_Config_TIM4_EN 0x00000004
#define RCC_APB1ENR_Config_WWDG_EN 0x00000800
#define RCC_APB1ENR_Config_SPI2_EN 0x00004000
#define RCC_APB1ENR_Config_USART2_EN 0x00020000
#define RCC_APB1ENR_Config_USART3_EN 0x00040000
#define RCC_APB1ENR_Config_I2C1_EN 0x00200000
#define RCC_APB1ENR_Config_I2C2_EN 0x00400000
#define RCC_APB1ENR_Config_USB_EN 0x00800000
#define RCC_APB1ENR_Config_CAN1_EN 0x02000000
#define RCC_APB1ENR_Config_BKPRAM_EN 0x08000000
#define RCC_APB1ENR_Config_PWR_EN 0x10000000

//Backup Domain Control Register
#define RCC_BDCR_Config_LSEON 0x00000001
#define RCC_BDCR_Config_LSERDY 0x00000002
#define RCC_BDCR_Config_LSEBYP 0x00000004
#define RCC_BDCR_Config_RTCSEL_Disable 0x00000000
#define RCC_BDCR_Config_RTCSEL_LSE 0x00000100
#define RCC_BDCR_Config_RTCSEL_LSI 0x00000200
#define RCC_BDCR_Config_RTCSEL_HSE 0x00000300
#define RCC_BDCR_Config_RTCEN 0x00008000
#define RCC_BDCR_Config_BDRST 0x00010000

//Control/Status Register
#define RCC_CSR_Config_LSION 0x00000001
#define RCC_CSR_Flag_LSIRDY 0x00000002
#define RCC_CSR_Flag_RMV 0x01000000
#define RCC_CSR_Flag_PINRSTF 0x04000000
#define RCC_CSR_Flag_PORRSTF 0x08000000
#define RCC_CSR_Flag_SFTRSTF 0x10000000
#define RCC_CSR_Flag_IWDGRSTF 0x20000000
#define RCC_CSR_Flag_WWDGRSTF 0x40000000
#define RCC_CSR_Flag_LPWRRSTF 0x80000000

#endif