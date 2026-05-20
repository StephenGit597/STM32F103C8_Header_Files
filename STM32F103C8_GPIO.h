/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_GPIO_h
#define STM32F103C8_GPIO_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/* GPIO部分定义*/
//GPIO基地址常量定义
#define GPIOA_BASE 0x40010800
#define GPIOB_BASE 0x40010C00
#define GPIOC_BASE 0x40011000
//GPIO基地址定义
#define GPIOA ((Typedef_GPIO *)GPIOA_BASE)
#define GPIOB ((Typedef_GPIO *)GPIOB_BASE)
#define GPIOC ((Typedef_GPIO *)GPIOC_BASE)
//GPIO结构体定义
typedef struct 
{
    volatile uint32_t GPIOx_CRL; //偏移量0x00 Port Configuration Register Low
	volatile uint32_t GPIOx_CRH; //偏移量0x04 Port Configuration Register High
	volatile uint32_t GPIOx_IDR; //偏移量0x08 Input Data Register
	volatile uint32_t GPIOx_ODR; //偏移量0x0C Output Data Register
	volatile uint32_t GPIOx_BSRR;//偏移量0x10 Bit Set/Reset Register
	volatile uint32_t GPIOx_BRR; //偏移量0x14 Bit Reset Register
	volatile uint32_t GPIO_LCKR; //偏移量0x18 Configuration Lock Register
}Typedef_GPIO;

//Port Configuration Register Low
//GPIO_0
//输入
#define GPIOx_Port0_Configuration_IN_AIN 0x00000000
#define GPIOx_Port0_Configuration_IN_Floating 0x00000001
#define GPIOx_Port0_Configuration_IN_Pull_up_Pull_dpwn 0x00000002
//输出
//10MHz
#define GPIOx_Port0_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000004
#define GPIOx_Port0_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000005
#define GPIOx_Port0_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000006
#define GPIOx_Port0_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000007
//2MHz
#define GPIOx_Port0_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000008
#define GPIOx_Port0_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000009
#define GPIOx_Port0_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0000000A
#define GPIOx_Port0_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0000000B
//50Mhz
#define GPIOx_Port0_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0000000C
#define GPIOx_Port0_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0000000D
#define GPIOx_Port0_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0000000E
#define GPIOx_Port0_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0000000F
//GPIO_1
//输入
#define GPIOx_Port1_Configuration_IN_AIN 0x00000000
#define GPIOx_Port1_Configuration_IN_Floating 0x00000010
#define GPIOx_Port1_Configuration_IN_Pull_up_Pull_dpwn 0x00000020
//输出
//10MHz
#define GPIOx_Port1_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000040
#define GPIOx_Port1_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000050
#define GPIOx_Port1_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000060
#define GPIOx_Port1_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000070
//2MHz
#define GPIOx_Port1_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000080
#define GPIOx_Port1_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000090
#define GPIOx_Port1_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x000000A0
#define GPIOx_Port1_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x000000B0
//50Mhz
#define GPIOx_Port1_Configuration_OUT_50MHZ_Generall_Push_Pull 0x000000C0
#define GPIOx_Port1_Configuration_OUT_50MHZ_Generall_Open_Drain 0x000000D0
#define GPIOx_Port1_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x000000E0
#define GPIOx_Port1_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x000000F0
//GPIO_2
//输入
#define GPIOx_Port2_Configuration_IN_AIN 0x00000000
#define GPIOx_Port2_Configuration_IN_Floating 0x00000100
#define GPIOx_Port2_Configuration_IN_Pull_up_Pull_dpwn 0x00000200
//输出
//10MHz
#define GPIOx_Port2_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000400
#define GPIOx_Port2_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000500
#define GPIOx_Port2_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000600
#define GPIOx_Port2_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000700
//2MHz
#define GPIOx_Port2_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000800
#define GPIOx_Port2_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000900
#define GPIOx_Port2_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x00000A00
#define GPIOx_Port2_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x00000B00
//50Mhz
#define GPIOx_Port2_Configuration_OUT_50MHZ_Generall_Push_Pull 0x00000C00
#define GPIOx_Port2_Configuration_OUT_50MHZ_Generall_Open_Drain 0x00000D00
#define GPIOx_Port2_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x00000E00
#define GPIOx_Port2_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x00000F00
//GPIO_3
//输入
#define GPIOx_Port3_Configuration_IN_AIN 0x00000000
#define GPIOx_Port3_Configuration_IN_Floating 0x00001000
#define GPIOx_Port3_Configuration_IN_Pull_up_Pull_dpwn 0x00002000
//输出
//10MHz
#define GPIOx_Port3_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00004000
#define GPIOx_Port3_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00005000
#define GPIOx_Port3_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00006000
#define GPIOx_Port3_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00007000
//2MHz
#define GPIOx_Port3_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00008000
#define GPIOx_Port3_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00009000
#define GPIOx_Port3_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0000A000
#define GPIOx_Port3_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0000B000
//50Mhz
#define GPIOx_Port3_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0000C000
#define GPIOx_Port3_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0000D000
#define GPIOx_Port3_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0000E000
#define GPIOx_Port3_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0000F000
//GPIO_4
//输入
#define GPIOx_Port4_Configuration_IN_AIN 0x00000000
#define GPIOx_Port4_Configuration_IN_Floating 0x00010000
#define GPIOx_Port4_Configuration_IN_Pull_up_Pull_dpwn 0x00020000
//输出
//10MHz
#define GPIOx_Port4_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00040000
#define GPIOx_Port4_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00050000
#define GPIOx_Port4_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00060000
#define GPIOx_Port4_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00070000
//2MHz
#define GPIOx_Port4_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00080000
#define GPIOx_Port4_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00090000
#define GPIOx_Port4_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x000A0000
#define GPIOx_Port4_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x000B0000
//50Mhz
#define GPIOx_Port4_Configuration_OUT_50MHZ_Generall_Push_Pull 0x000C0000
#define GPIOx_Port4_Configuration_OUT_50MHZ_Generall_Open_Drain 0x000D0000
#define GPIOx_Port4_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x000E0000
#define GPIOx_Port4_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x000F0000
//GPIO_5
//输入
#define GPIOx_Port5_Configuration_IN_AIN 0x00000000
#define GPIOx_Port5_Configuration_IN_Floating 0x00100000
#define GPIOx_Port5_Configuration_IN_Pull_up_Pull_dpwn 0x00200000
//输出
//10MHz
#define GPIOx_Port5_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00400000
#define GPIOx_Port5_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00500000
#define GPIOx_Port5_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00600000
#define GPIOx_Port5_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00700000
//2MHz
#define GPIOx_Port5_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00800000
#define GPIOx_Port5_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00900000
#define GPIOx_Port5_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x00A00000
#define GPIOx_Port5_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x00B00000
//50Mhz
#define GPIOx_Port5_Configuration_OUT_50MHZ_Generall_Push_Pull 0x00C00000
#define GPIOx_Port5_Configuration_OUT_50MHZ_Generall_Open_Drain 0x00D00000
#define GPIOx_Port5_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x00E00000
#define GPIOx_Port5_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x00F00000
//GPIO_6
//输入
#define GPIOx_Port6_Configuration_IN_AIN 0x00000000
#define GPIOx_Port6_Configuration_IN_Floating 0x01000000
#define GPIOx_Port6_Configuration_IN_Pull_up_Pull_dpwn 0x00000002
//输出
//10MHz
#define GPIOx_Port6_Configuration_OUT_10MHZ_Generall_Push_Pull 0x04000000
#define GPIOx_Port6_Configuration_OUT_10MHZ_Generall_Open_Drain 0x05000000
#define GPIOx_Port6_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x06000000
#define GPIOx_Port6_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x07000000
//2MHz
#define GPIOx_Port6_Configuration_OUT_2MHZ_Generall_Push_Pull 0x08000000
#define GPIOx_Port6_Configuration_OUT_2MHZ_Generall_Open_Drain 0x09000000
#define GPIOx_Port6_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0A000000
#define GPIOx_Port6_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0B000000
//50Mhz
#define GPIOx_Port6_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0C000000
#define GPIOx_Port6_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0D000000
#define GPIOx_Port6_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0E000000
#define GPIOx_Port6_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0F000000
//GPIO_7
//输入
#define GPIOx_Port7_Configuration_IN_AIN 0x00000000
#define GPIOx_Port7_Configuration_IN_Floating 0x10000000
#define GPIOx_Port7_Configuration_IN_Pull_up_Pull_dpwn 0x20000000
//输出
//10MHz
#define GPIOx_Port7_Configuration_OUT_10MHZ_Generall_Push_Pull 0x40000000
#define GPIOx_Port7_Configuration_OUT_10MHZ_Generall_Open_Drain 0x50000000
#define GPIOx_Port7_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x60000000
#define GPIOx_Port7_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x70000000
//2MHz
#define GPIOx_Port7_Configuration_OUT_2MHZ_Generall_Push_Pull 0x80000000
#define GPIOx_Port7_Configuration_OUT_2MHZ_Generall_Open_Drain 0x90000000
#define GPIOx_Port7_Configuration_OUT_2MHZ_Altertive_Push_Pull 0xA0000000
#define GPIOx_Port7_Configuration_OUT_2MHZ_Altertive_Open_Drain 0xB0000000
//50Mhz
#define GPIOx_Port7_Configuration_OUT_50MHZ_Generall_Push_Pull 0xC0000000
#define GPIOx_Port7_Configuration_OUT_50MHZ_Generall_Open_Drain 0xD0000000
#define GPIOx_Port7_Configuration_OUT_50MHZ_Altertive_Push_Pull 0xE0000000
#define GPIOx_Port7_Configuration_OUT_50MHZ_Altertive_Open_Drain 0xF0000000


//Port Configuration Register High
//GPIO_8
//输入
#define GPIOx_Port8_Configuration_IN_AIN 0x00000000
#define GPIOx_Port8_Configuration_IN_Floating 0x00000001
#define GPIOx_Port8_Configuration_IN_Pull_up_Pull_dpwn 0x00000002
//输出
//10MHz
#define GPIOx_Port8_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000004
#define GPIOx_Port8_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000005
#define GPIOx_Port8_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000006
#define GPIOx_Port8_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000007
//2MHz
#define GPIOx_Port8_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000008
#define GPIOx_Port8_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000009
#define GPIOx_Port8_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0000000A
#define GPIOx_Port8_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0000000B
//50Mhz
#define GPIOx_Port8_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0000000C
#define GPIOx_Port8_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0000000D
#define GPIOx_Port8_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0000000E
#define GPIOx_Port8_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0000000F
//GPIO_9
//输入
#define GPIOx_Port9_Configuration_IN_AIN 0x00000000
#define GPIOx_Port9_Configuration_IN_Floating 0x00000010
#define GPIOx_Port9_Configuration_IN_Pull_up_Pull_dpwn 0x00000020
//输出
//10MHz
#define GPIOx_Port9_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000040
#define GPIOx_Port9_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000050
#define GPIOx_Port9_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000060
#define GPIOx_Port9_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000070
//2MHz
#define GPIOx_Port9_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000080
#define GPIOx_Port9_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000090
#define GPIOx_Port9_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x000000A0
#define GPIOx_Port9_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x000000B0
//50Mhz
#define GPIOx_Port9_Configuration_OUT_50MHZ_Generall_Push_Pull 0x000000C0
#define GPIOx_Port9_Configuration_OUT_50MHZ_Generall_Open_Drain 0x000000D0
#define GPIOx_Port9_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x000000E0
#define GPIOx_Port9_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x000000F0
//GPIO_10
//输入
#define GPIOx_Port10_Configuration_IN_AIN 0x00000000
#define GPIOx_Port10_Configuration_IN_Floating 0x00000100
#define GPIOx_Port10_Configuration_IN_Pull_up_Pull_dpwn 0x00000200
//输出
//10MHz
#define GPIOx_Port10_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00000400
#define GPIOx_Port10_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00000500
#define GPIOx_Port10_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00000600
#define GPIOx_Port10_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00000700
//2MHz
#define GPIOx_Port10_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00000800
#define GPIOx_Port10_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00000900
#define GPIOx_Port10_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x00000A00
#define GPIOx_Port10_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x00000B00
//50Mhz
#define GPIOx_Port10_Configuration_OUT_50MHZ_Generall_Push_Pull 0x00000C00
#define GPIOx_Port10_Configuration_OUT_50MHZ_Generall_Open_Drain 0x00000D00
#define GPIOx_Port10_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x00000E00
#define GPIOx_Port10_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x00000F00
//GPIO_3
//输入
#define GPIOx_Port11_Configuration_IN_AIN 0x00000000
#define GPIOx_Port11_Configuration_IN_Floating 0x00001000
#define GPIOx_Port11_Configuration_IN_Pull_up_Pull_dpwn 0x00002000
//输出
//10MHz
#define GPIOx_Port11_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00004000
#define GPIOx_Port11_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00005000
#define GPIOx_Port11_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00006000
#define GPIOx_Port11_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00007000
//2MHz
#define GPIOx_Port11_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00008000
#define GPIOx_Port11_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00009000
#define GPIOx_Port11_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0000A000
#define GPIOx_Port11_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0000B000
//50Mhz
#define GPIOx_Port11_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0000C000
#define GPIOx_Port11_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0000D000
#define GPIOx_Port11_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0000E000
#define GPIOx_Port11_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0000F000
//GPIO_12
//输入
#define GPIOx_Port12_Configuration_IN_AIN 0x00000000
#define GPIOx_Port12_Configuration_IN_Floating 0x00010000
#define GPIOx_Port12_Configuration_IN_Pull_up_Pull_dpwn 0x00020000
//输出
//10MHz
#define GPIOx_Port12_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00040000
#define GPIOx_Port12_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00050000
#define GPIOx_Port12_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00060000
#define GPIOx_Port12_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00070000
//2MHz
#define GPIOx_Port12_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00080000
#define GPIOx_Port12_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00090000
#define GPIOx_Port12_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x000A0000
#define GPIOx_Port12_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x000B0000
//50Mhz
#define GPIOx_Port12_Configuration_OUT_50MHZ_Generall_Push_Pull 0x000C0000
#define GPIOx_Port12_Configuration_OUT_50MHZ_Generall_Open_Drain 0x000D0000
#define GPIOx_Port12_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x000E0000
#define GPIOx_Port12_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x000F0000
//GPIO_13
//输入
#define GPIOx_Port13_Configuration_IN_AIN 0x00000000
#define GPIOx_Port13_Configuration_IN_Floating 0x00100000
#define GPIOx_Port13_Configuration_IN_Pull_up_Pull_dpwn 0x00200000
//输出
//10MHz
#define GPIOx_Port13_Configuration_OUT_10MHZ_Generall_Push_Pull 0x00400000
#define GPIOx_Port13_Configuration_OUT_10MHZ_Generall_Open_Drain 0x00500000
#define GPIOx_Port13_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x00600000
#define GPIOx_Port13_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x00700000
//2MHz
#define GPIOx_Port13_Configuration_OUT_2MHZ_Generall_Push_Pull 0x00800000
#define GPIOx_Port13_Configuration_OUT_2MHZ_Generall_Open_Drain 0x00900000
#define GPIOx_Port13_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x00A00000
#define GPIOx_Port13_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x00B00000
//50Mhz
#define GPIOx_Port13_Configuration_OUT_50MHZ_Generall_Push_Pull 0x00C00000
#define GPIOx_Port13_Configuration_OUT_50MHZ_Generall_Open_Drain 0x00D00000
#define GPIOx_Port13_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x00E00000
#define GPIOx_Port13_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x00F00000
//GPIO_14
//输入
#define GPIOx_Port14_Configuration_IN_AIN 0x00000000
#define GPIOx_Port14_Configuration_IN_Floating 0x01000000
#define GPIOx_Port14_Configuration_IN_Pull_up_Pull_dpwn 0x00000002
//输出
//10MHz
#define GPIOx_Port14_Configuration_OUT_10MHZ_Generall_Push_Pull 0x04000000
#define GPIOx_Port14_Configuration_OUT_10MHZ_Generall_Open_Drain 0x05000000
#define GPIOx_Port14_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x06000000
#define GPIOx_Port14_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x07000000
//2MHz
#define GPIOx_Port14_Configuration_OUT_2MHZ_Generall_Push_Pull 0x08000000
#define GPIOx_Port14_Configuration_OUT_2MHZ_Generall_Open_Drain 0x09000000
#define GPIOx_Port14_Configuration_OUT_2MHZ_Altertive_Push_Pull 0x0A000000
#define GPIOx_Port14_Configuration_OUT_2MHZ_Altertive_Open_Drain 0x0B000000
//50Mhz
#define GPIOx_Port14_Configuration_OUT_50MHZ_Generall_Push_Pull 0x0C000000
#define GPIOx_Port14_Configuration_OUT_50MHZ_Generall_Open_Drain 0x0D000000
#define GPIOx_Port14_Configuration_OUT_50MHZ_Altertive_Push_Pull 0x0E000000
#define GPIOx_Port14_Configuration_OUT_50MHZ_Altertive_Open_Drain 0x0F000000
//GPIO_15
//输入
#define GPIOx_Port15_Configuration_IN_AIN 0x00000000
#define GPIOx_Port15_Configuration_IN_Floating 0x10000000
#define GPIOx_Port15_Configuration_IN_Pull_up_Pull_dpwn 0x20000000
//输出
//10MHz
#define GPIOx_Port15_Configuration_OUT_10MHZ_Generall_Push_Pull 0x40000000
#define GPIOx_Port15_Configuration_OUT_10MHZ_Generall_Open_Drain 0x50000000
#define GPIOx_Port15_Configuration_OUT_10MHZ_Altertive_Push_Pull 0x60000000
#define GPIOx_Port15_Configuration_OUT_10MHZ_Altertive_Open_Drain 0x70000000
//2MHz
#define GPIOx_Port15_Configuration_OUT_2MHZ_Generall_Push_Pull 0x80000000
#define GPIOx_Port15_Configuration_OUT_2MHZ_Generall_Open_Drain 0x90000000
#define GPIOx_Port15_Configuration_OUT_2MHZ_Altertive_Push_Pull 0xA0000000
#define GPIOx_Port15_Configuration_OUT_2MHZ_Altertive_Open_Drain 0xB0000000
//50Mhz
#define GPIOx_Port15_Configuration_OUT_50MHZ_Generall_Push_Pull 0xC0000000
#define GPIOx_Port15_Configuration_OUT_50MHZ_Generall_Open_Drain 0xD0000000
#define GPIOx_Port15_Configuration_OUT_50MHZ_Altertive_Push_Pull 0xE0000000
#define GPIOx_Port15_Configuration_OUT_50MHZ_Altertive_Open_Drain 0xF0000000

//Input Data Register

//Output Data Register
#define GPIOx_Port0_Output_Data_Register_Set 0x00000001
#define GPIOx_Port1_Output_Data_Register_Set 0x00000002
#define GPIOx_Port2_Output_Data_Register_Set 0x00000004
#define GPIOx_Port3_Output_Data_Register_Set 0x00000008
#define GPIOx_Port4_Output_Data_Register_Set 0x00000010
#define GPIOx_Port5_Output_Data_Register_Set 0x00000020
#define GPIOx_Port6_Output_Data_Register_Set 0x00000040
#define GPIOx_Port7_Output_Data_Register_Set 0x00000080
#define GPIOx_Port8_Output_Data_Register_Set 0x00000100
#define GPIOx_Port9_Output_Data_Register_Set 0x00000200
#define GPIOx_Port10_Output_Data_Register_Set 0x00000400
#define GPIOx_Port11_Output_Data_Register_Set 0x00000800
#define GPIOx_Port12_Output_Data_Register_Set 0x00001000
#define GPIOx_Port13_Output_Data_Register_Set 0x00002000
#define GPIOx_Port14_Output_Data_Register_Set 0x00004000
#define GPIOx_Port15_Output_Data_Register_Set 0x00008000

//Bit Set/Reset Register
//Set
#define GPIOx_Bit_Set_Reset_Register_Port0_Set 0x00000001
#define GPIOx_Bit_Set_Reset_Register_Port1_Set 0x00000002
#define GPIOx_Bit_Set_Reset_Register_Port2_Set 0x00000004
#define GPIOx_Bit_Set_Reset_Register_Port3_Set 0x00000008
#define GPIOx_Bit_Set_Reset_Register_Port4_Set 0x00000010
#define GPIOx_Bit_Set_Reset_Register_Port5_Set 0x00000020
#define GPIOx_Bit_Set_Reset_Register_Port6_Set 0x00000040
#define GPIOx_Bit_Set_Reset_Register_Port7_Set 0x00000080
#define GPIOx_Bit_Set_Reset_Register_Port8_Set 0x00000100
#define GPIOx_Bit_Set_Reset_Register_Port9_Set 0x00000200
#define GPIOx_Bit_Set_Reset_Register_Port10_Set 0x00000400
#define GPIOx_Bit_Set_Reset_Register_Port11_Set 0x00000800
#define GPIOx_Bit_Set_Reset_Register_Port12_Set 0x00001000
#define GPIOx_Bit_Set_Reset_Register_Port13_Set 0x00002000
#define GPIOx_Bit_Set_Reset_Register_Port14_Set 0x00004000
#define GPIOx_Bit_Set_Reset_Register_Port15_Set 0x00008000
//Reset
#define GPIOx_Bit_Set_Reset_Register_Port0_Reset 0x00010000
#define GPIOx_Bit_Set_Reset_Register_Port1_Reset 0x00020000
#define GPIOx_Bit_Set_Reset_Register_Port2_Reset 0x00040000
#define GPIOx_Bit_Set_Reset_Register_Port3_Reset 0x00080000
#define GPIOx_Bit_Set_Reset_Register_Port4_Reset 0x00100000
#define GPIOx_Bit_Set_Reset_Register_Port5_Reset 0x00200000
#define GPIOx_Bit_Set_Reset_Register_Port6_Reset 0x00400000
#define GPIOx_Bit_Set_Reset_Register_Port7_Reset 0x00800000
#define GPIOx_Bit_Set_Reset_Register_Port8_Reset 0x01000000
#define GPIOx_Bit_Set_Reset_Register_Port9_Reset 0x02000000
#define GPIOx_Bit_Set_Reset_Register_Port10_Reset 0x04000000
#define GPIOx_Bit_Set_Reset_Register_Port11_Reset 0x08000000
#define GPIOx_Bit_Set_Reset_Register_Port12_Reset 0x10000000
#define GPIOx_Bit_Set_Reset_Register_Port13_Reset 0x20000000
#define GPIOx_Bit_Set_Reset_Register_Port14_Reset 0x40000000
#define GPIOx_Bit_Set_Reset_Register_Port15_Reset 0x80000000

//Bit Reset Register
#define GPIOx_Bit_Reset_Register_Port0_Reset 0x00000001
#define GPIOx_Bit_Reset_Register_Port1_Reset 0x00000002
#define GPIOx_Bit_Reset_Register_Port2_Reset 0x00000004
#define GPIOx_Bit_Reset_Register_Port3_Reset 0x00000008
#define GPIOx_Bit_Reset_Register_Port4_Reset 0x00000010
#define GPIOx_Bit_Reset_Register_Port5_Reset 0x00000020
#define GPIOx_Bit_Reset_Register_Port6_Reset 0x00000040
#define GPIOx_Bit_Reset_Register_Port7_Reset 0x00000080
#define GPIOx_Bit_Reset_Register_Port8_Reset 0x00000100
#define GPIOx_Bit_Reset_Register_Port9_Reset 0x00000200
#define GPIOx_Bit_Reset_Register_Port10_Reset 0x00000400
#define GPIOx_Bit_Reset_Register_Port11_Reset 0x00000800
#define GPIOx_Bit_Reset_Register_Port12_Reset 0x00001000
#define GPIOx_Bit_Reset_Register_Port13_Reset 0x00002000
#define GPIOx_Bit_Reset_Register_Port14_Reset 0x00004000
#define GPIOx_Bit_Reset_Register_Port15_Reset 0x00008000

//Configuration Lock Register
//LCK[15:0] LCKy = 1 → 锁定 引脚 y 的配置
//LCKK（Bit 16）1-0-1
#define GPIOx_Configuration_Lock_Register_Port0 0x00000001
#define GPIOx_Configuration_Lock_Register_Port1 0x00000002
#define GPIOx_Configuration_Lock_Register_Port2 0x00000004
#define GPIOx_Configuration_Lock_Register_Port3 0x00000008
#define GPIOx_Configuration_Lock_Register_Port4 0x00000010
#define GPIOx_Configuration_Lock_Register_Port5 0x00000020
#define GPIOx_Configuration_Lock_Register_Port6 0x00000040
#define GPIOx_Configuration_Lock_Register_Port7 0x00000080
#define GPIOx_Configuration_Lock_Register_Port8 0x00000100
#define GPIOx_Configuration_Lock_Register_Port9 0x00000200
#define GPIOx_Configuration_Lock_Register_Port10 0x00000400
#define GPIOx_Configuration_Lock_Register_Port11 0x00000800
#define GPIOx_Configuration_Lock_Register_Port12 0x00001000
#define GPIOx_Configuration_Lock_Register_Port13 0x00002000
#define GPIOx_Configuration_Lock_Register_Port14 0x00004000
#define GPIOx_Configuration_Lock_Register_Port15 0x00008000
//解锁函数
//GPIOX 0;GPIOA 1;GPIOB 2;GPIOC
static inline unsigned char Configuration_Lock_Register_Lock(unsigned char GPIOX)
{
    unsigned char temp1=0;
    unsigned char temp2=0;
    switch(GPIOX)
    {
        case 0:
        {
            GPIOA->GPIO_LCKR = (GPIOA->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            GPIOA->GPIO_LCKR = (GPIOA->GPIO_LCKR&0xFFFEFFFF)|(0x0<<16);
            GPIOA->GPIO_LCKR = (GPIOA->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            temp1=((GPIOA->GPIO_LCKR&0x00010000)>>16);
            temp2=((GPIOA->GPIO_LCKR&0x00010000)>>16);
            break;
        }
        case 1:
        {
            GPIOB->GPIO_LCKR = (GPIOB->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            GPIOB->GPIO_LCKR = (GPIOB->GPIO_LCKR&0xFFFEFFFF)|(0x0<<16);
            GPIOB->GPIO_LCKR = (GPIOB->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            temp1=((GPIOB->GPIO_LCKR&0x00010000)>>16);
            temp2=((GPIOB->GPIO_LCKR&0x00010000)>>16);
            break;
        }
        case 2:
        {
            GPIOC->GPIO_LCKR = (GPIOC->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            GPIOC->GPIO_LCKR = (GPIOC->GPIO_LCKR&0xFFFEFFFF)|(0x0<<16);
            GPIOC->GPIO_LCKR = (GPIOC->GPIO_LCKR&0xFFFEFFFF)|(0x1<<16);
            temp1=((GPIOC->GPIO_LCKR&0x00010000)>>16);
            temp2=((GPIOC->GPIO_LCKR&0x00010000)>>16);
            break;
        }
        default
        {
            break;
        }
    }
    if((temp1==0)&&(temp2==1))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

#endif