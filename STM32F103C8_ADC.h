/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_ADC_h
#define STM32F103C8_ADC_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*ADC寄存器*/
//ADC地址常量定义
#define ADC1_BASE 0x40012400
#define ADC2_BASE 0x40012800
//ADC寄存器声明
#define ADC1 ((Typedef_ADC1 *)ADC1_BASE)
#define ADC2 ((Typedef_ADC2 *)ADC2_BASE)
//ADC1结构体定义
typedef struct
{
	volatile uint32_t ADC1_SR;
	volatile uint32_t ADC1_CR1;
	volatile uint32_t ADC1_CR2;
	volatile uint32_t ADC1_SMPR1;
	volatile uint32_t ADC1_SMPR2;
	volatile uint32_t ADC1_JOFR1;
	volatile uint32_t ADC1_JOFR2;
	volatile uint32_t ADC1_JOFR3;
	volatile uint32_t ADC1_JOFR4;
	volatile uint32_t ADC1_HTR;
	volatile uint32_t ADC1_LRT;
	volatile uint32_t ADC1_SQR1;
	volatile uint32_t ADC1_SQR2;
	volatile uint32_t ADC1_SQR3;
	volatile uint32_t ADC1_JSQR;
	volatile uint32_t ADC1_JDR1;
	volatile uint32_t ADC1_JDR2;
	volatile uint32_t ADC1_JDR3;
	volatile uint32_t ADC1_JDR4;
	volatile uint32_t ADC1_DR;
}Typedef_ADC1;
//ADC2结构体定义
typedef struct
{
	volatile uint32_t ADC2_SR;
	volatile uint32_t ADC2_CR1;
	volatile uint32_t ADC2_CR2;
	volatile uint32_t ADC2_SMPR1;
	volatile uint32_t ADC2_SMPR2;
	volatile uint32_t ADC2_JOFR1;
	volatile uint32_t ADC2_JOFR2;
	volatile uint32_t ADC2_JOFR3;
	volatile uint32_t ADC2_JOFR4;
	volatile uint32_t ADC2_HTR;
	volatile uint32_t ADC2_LRT;
	volatile uint32_t ADC2_SQR1;
	volatile uint32_t ADC2_SQR2;
	volatile uint32_t ADC2_SQR3;
	volatile uint32_t ADC2_JSQR;
	volatile uint32_t ADC2_JDR1;
	volatile uint32_t ADC2_JDR2;
	volatile uint32_t ADC2_JDR3;
	volatile uint32_t ADC2_JDR4;
	volatile uint32_t ADC2_DR;
}Typedef_ADC2;

//ADCx_SR
#define ADCx_Flag_SR_Analog_Watch_Dog 0x00000001
#define ADCx_Flag_SR_Regular_Channel_End_Of_Conversion 0x00000002
#define ADCx_Flag_SR_Inject_Channel_End_Of_Conversion 0x00000004
#define ADCx_Flag_SR_Inject_Channel_Start 0x0000008
#define ADCx_Flag_SR_Regular_Channel_Start 0x0000010

//ADC1_CR1
//模拟看门狗监视通道
#define ADC1_Config_CR1_Analog_Watch_Dog_CH0 0x00000000
#define ADC1_Config_CR1_Analog_Watch_Dog_CH1 0x00000001
#define ADC1_Config_CR1_Analog_Watch_Dog_CH2 0x00000002
#define ADC1_Config_CR1_Analog_Watch_Dog_CH3 0x00000003
#define ADC1_Config_CR1_Analog_Watch_Dog_CH4 0x00000004
#define ADC1_Config_CR1_Analog_Watch_Dog_CH5 0x00000005
#define ADC1_Config_CR1_Analog_Watch_Dog_CH6 0x00000006
#define ADC1_Config_CR1_Analog_Watch_Dog_CH7 0x00000007
#define ADC1_Config_CR1_Analog_Watch_Dog_CH8 0x00000008
#define ADC1_Config_CR1_Analog_Watch_Dog_CH9 0x00000009
#define ADC1_Config_CR1_Analog_Watch_Dog_CH10 0x0000000A
#define ADC1_Config_CR1_Analog_Watch_Dog_CH11 0x0000000B
#define ADC1_Config_CR1_Analog_Watch_Dog_CH12 0x0000000C
#define ADC1_Config_CR1_Analog_Watch_Dog_CH13 0x0000000D
#define ADC1_Config_CR1_Analog_Watch_Dog_CH14 0x0000000E
#define ADC1_Config_CR1_Analog_Watch_Dog_CH15 0x0000000F
#define ADC1_Config_CR1_Analog_Watch_Dog_CH16 0x00000010
#define ADC1_Config_CR1_Analog_Watch_Dog_CH17 0x00000011
//Interrupt_ON
#define ADC1_Config_CR1_Regular_Channel_End_Of_Conversion_Interrupt_Enable 0x00000020
#define ADC1_Config_CR1_Analog_Watch_Dog_Interrupt_Enable 0x00000040
#define ADC1_Config_CR1_Inject_Channel_End_Of_Conversion_Interrupt_Enable 0x00000080
//扫描模式
#define ADC1_Config_CR1_SCAN_Enable 0x00000100
//使能模拟看门狗
#define ADC1_Config_CR1_Analog_Watch_Dog_Single_Enable 0x00000200
//自动注入模式转换使能
#define ADC1_Config_CR1_Auto_Inject_Convert_Enable 0x00000400
//规则通道连续转换模式
#define ADC1_Config_CR1_Regular_Channel_Discontinuous_Mode 0x00000800
//注入通道连续转换模式
#define ADC1_Config_CR1_inject_Channel_Discontinuous_Mode 0x00001000
//连续模式通道数
#define ADC1_Config_CR1_Discontinuous_Mode_Num_1 0x00000000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_2 0x00002000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_3 0x00004000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_4 0x00006000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_5 0x00008000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_6 0x0000A000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_7 0x0000C000
#define ADC1_Config_CR1_Discontinuous_Mode_Num_8 0x0000E000
//ADC主模式选择
#define ADC1_Config_CR1_ADC_Mode_Independent 0x00000000
#define ADC1_Config_CR1_ADC_Mode_RegInjecSimult 0x00010000
#define ADC1_Config_CR1_ADC_Mode_RegSimult_AlterTrig 0x00020000
#define ADC1_Config_CR1_ADC_Mode_InjecSimult_FastInterleaved 0x00030000
#define ADC1_Config_CR1_ADC_Mode_InjecSimult_SlowInterleaved 0x00040000
#define ADC1_Config_CR1_ADC_Mode_Injected_Simult 0x00050000
#define ADC1_Config_CR1_ADC_Mode_Regular_Simult 0x00060000
#define ADC1_Config_CR1_ADC_Mode_Fast_Interleaved 0x00070000
#define ADC1_Config_CR1_ADC_Mode_Slow_Interleaved 0x00080000
#define ADC1_Config_CR1_ADC_Mode_Alternate_Trigger 0x00090000
//注入通道看门狗使能
#define ADC1_Config_CR1_Analog_Watch_Dog_on_Inject_Channel 0x00400000
//规则通道看门狗使能
#define ADC1_Config_CR1_Analog_Watch_Dog_on_Regular_Channel 0x00800000

//ADC2_CR1
//模拟看门狗监视通道
#define ADC2_Config_CR1_Analog_Watch_Dog_CH0 0x00000000
#define ADC2_Config_CR1_Analog_Watch_Dog_CH1 0x00000001
#define ADC2_Config_CR1_Analog_Watch_Dog_CH2 0x00000002
#define ADC2_Config_CR1_Analog_Watch_Dog_CH3 0x00000003
#define ADC2_Config_CR1_Analog_Watch_Dog_CH4 0x00000004
#define ADC2_Config_CR1_Analog_Watch_Dog_CH5 0x00000005
#define ADC2_Config_CR1_Analog_Watch_Dog_CH6 0x00000006
#define ADC2_Config_CR1_Analog_Watch_Dog_CH7 0x00000007
#define ADC2_Config_CR1_Analog_Watch_Dog_CH8 0x00000008
#define ADC2_Config_CR1_Analog_Watch_Dog_CH9 0x00000009
#define ADC2_Config_CR1_Analog_Watch_Dog_CH10 0x0000000A
#define ADC2_Config_CR1_Analog_Watch_Dog_CH11 0x0000000B
#define ADC2_Config_CR1_Analog_Watch_Dog_CH12 0x0000000C
#define ADC2_Config_CR1_Analog_Watch_Dog_CH13 0x0000000D
#define ADC2_Config_CR1_Analog_Watch_Dog_CH14 0x0000000E
#define ADC2_Config_CR1_Analog_Watch_Dog_CH15 0x0000000F
#define ADC2_Config_CR1_Analog_Watch_Dog_CH16 0x00000010
#define ADC2_Config_CR1_Analog_Watch_Dog_CH17 0x00000011
//Interrupt_ON
#define ADC2_Config_CR1_Regular_Channel_End_Of_Conversion_Interrupt_Enable 0x00000020
#define ADC2_Config_CR1_Analog_Watch_Dog_Interrupt_Enable 0x00000040
#define ADC2_Config_CR1_Inject_Channel_End_Of_Conversion_Interrupt_Enable 0x00000080
//扫描模式
#define ADC2_Config_CR1_SCAN_Enable 0x00000100
//使能模拟看门狗
#define ADC2_Config_CR1_Analog_Watch_Dog_Single_Enable 0x00000200
//自动注入模式转换使能
#define ADC2_Config_CR1_Auto_Inject_Convert_Enable 0x00000400
//规则通道连续转换模式
#define ADC2_Config_CR1_Regular_Channel_Discontinuous_Mode 0x00000800
//注入通道连续转换模式
#define ADC2_Config_CR1_inject_Channel_Discontinuous_Mode 0x00001000
//连续模式通道数
#define ADC2_Config_CR1_Discontinuous_Mode_Num_1 0x00000000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_2 0x00002000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_3 0x00004000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_4 0x00006000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_5 0x00008000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_6 0x0000A000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_7 0x0000C000
#define ADC2_Config_CR1_Discontinuous_Mode_Num_8 0x0000E000
//注入通道看门狗使能
#define ADC2_Config_CR1_Analog_Watch_Dog_on_Inject_Channel 0x00400000
//规则通道看门狗使能
#define ADC2_Config_CR1_Analog_Watch_Dog_on_Regular_Channel 0x00800000

//ADCx_CR2
//ADC_Enable
#define ADC_Config_CR2_ADC_Enable 0x00000001
//ADC连续转换
#define ADC_Config_CR2_Continuous_Conversion 0x00000002
//ADC校准
#define ADC_Config_CR2_ADC_Calibration 0x00000004
//ADC复位校准
#define ADC_Config_CR2_ADC_Reset_Calibration 0x00000008
//ADC_DMA_Enable
#define ADC_Config_CR2_ADC_DMA_Enable 0x00000100
//ADC数据对齐格式
#define ADC_Config_CR2_DATA_Data_ALIGN 0x00000800
//ADC注入通道外部触发源
#define ADC_Config_CR2_Inject_Trigger_TIM1_TRGO 0x00000000
#define ADC_Config_CR2_Inject_Trigger_TIM1_CC4 0x00001000
#define ADC_Config_CR2_Inject_Trigger_TIM2_TRGO 0x00002000
#define ADC_Config_CR2_Inject_Trigger_TIM2_CC1 0x00003000
#define ADC_Config_CR2_Inject_Trigger_TIM3_CC4 0x00004000
#define ADC_Config_CR2_Inject_Trigger_TIM4_CC4 0x00005000
#define ADC_Config_CR2_Inject_Trigger_EXTI15_Or_TIM8_CC4 0x00006000
#define ADC_Config_CR2_Inject_Trigger_Softwear 0x00007000
//ADC注入通道外部触发使能
#define ADC_Config_CR2_Inject_Trigger_On 0x00008000
//ADC规则通道外部触发源
#define ADC_Config_CR2_Regular_Trigger_TIM1_TRGO 0x00000000
#define ADC_Config_CR2_Regular_Trigger_TIM1_CC4 0x00020000
#define ADC_Config_CR2_Regular_Trigger_TIM2_TRGO 0x00040000
#define ADC_Config_CR2_Regular_Trigger_TIM2_CC1 0x00060000
#define ADC_Config_CR2_Regular_Trigger_TIM3_CC4 0x00080000
#define ADC_Config_CR2_Regular_Trigger_TIM4_TRGO 0x000A0000
#define ADC_Config_CR2_Regular_Trigger_EXTI15_Or_TIM8_CC4 0x000C0000
#define ADC_Config_CR2_Regular_Trigger_Trigger_Softwear 0x000E0000
//ADC规则通道外部触发使能
#define ADC_Config_CR2_Regular_Trigger_ON 0x00100000
//ADC注入通道开始转换
#define ADC_Config_CR2_Inject_Convert_Start 0x00200000
//ADC规则通道开始转换
#define ADC_Config_CR2_Regular_Convert_Start 0x00400000
//内部温度传感器电压转换使能
#define ADC_Config_CR2_Temperature_Converter_Start 0x00800000

//ADCx_SMPR1
//ADC_SMPR1 10 11 12 13 14 15 16 17 (config_Cyc)<<3*(offset)
//ADC_SMPR2 0 1 2 3 4 5 6 7 8 9 (config_Cyc)<<3*(offset)
//CH10
#define ADC_Config_SMPRx_Sample_10_Cyc_1_5 0x00000000
#define ADC_Config_SMPRx_Sample_10_Cyc_7_5 0x00000001
#define ADC_Config_SMPRx_Sample_10_Cyc_13_5 0x00000002
#define ADC_Config_SMPRx_Sample_10_Cyc_28_5 0x00000003
#define ADC_Config_SMPRx_Sample_10_Cyc_41_5 0x00000004
#define ADC_Config_SMPRx_Sample_10_Cyc_55_5 0x00000005
#define ADC_Config_SMPRx_Sample_10_Cyc_71_5 0x00000006
#define ADC_Config_SMPRx_Sample_10_Cyc_239_5 0x00000007
//CH11
#define ADC_Config_SMPRx_Sample_11_Cyc_1_5 0x00000000<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_7_5 0x00000001<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_13_5 0x00000002<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_28_5 0x00000003<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_41_5 0x00000004<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_55_5 0x00000005<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_71_5 0x00000006<<3
#define ADC_Config_SMPRx_Sample_11_Cyc_239_5 0x00000007<<3
//CH12
#define ADC_Config_SMPRx_Sample_12_Cyc_1_5 0x00000000<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_7_5 0x00000001<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_13_5 0x00000002<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_28_5 0x00000003<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_41_5 0x00000004<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_55_5 0x00000005<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_71_5 0x00000006<<6
#define ADC_Config_SMPRx_Sample_12_Cyc_239_5 0x00000007<<6
//CH13
#define ADC_Config_SMPRx_Sample_13_Cyc_1_5 0x00000000<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_7_5 0x00000001<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_13_5 0x00000002<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_28_5 0x00000003<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_41_5 0x00000004<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_55_5 0x00000005<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_71_5 0x00000006<<9
#define ADC_Config_SMPRx_Sample_13_Cyc_239_5 0x00000007<<9
//CH14
#define ADC_Config_SMPRx_Sample_14_Cyc_1_5 0x00000000<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_7_5 0x00000001<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_13_5 0x00000002<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_28_5 0x00000003<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_41_5 0x00000004<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_55_5 0x00000005<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_71_5 0x00000006<<12
#define ADC_Config_SMPRx_Sample_14_Cyc_239_5 0x00000007<<12
//CH15
#define ADC_Config_SMPRx_Sample_15_Cyc_1_5 0x00000000<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_7_5 0x00000001<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_13_5 0x00000002<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_28_5 0x00000003<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_41_5 0x00000004<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_55_5 0x00000005<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_71_5 0x00000006<<15
#define ADC_Config_SMPRx_Sample_15_Cyc_239_5 0x00000007<<15
//CH16
#define ADC_Config_SMPRx_Sample_16_Cyc_1_5 0x00000000<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_7_5 0x00000001<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_13_5 0x00000002<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_28_5 0x00000003<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_41_5 0x00000004<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_55_5 0x00000005<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_71_5 0x00000006<<18
#define ADC_Config_SMPRx_Sample_16_Cyc_239_5 0x00000007<<18
//CH17
#define ADC_Config_SMPRx_Sample_17_Cyc_1_5 0x00000000<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_7_5 0x00000001<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_13_5 0x00000002<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_28_5 0x00000003<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_41_5 0x00000004<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_55_5 0x00000005<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_71_5 0x00000006<<21
#define ADC_Config_SMPRx_Sample_17_Cyc_239_5 0x00000007<<21

////ADCx_SMPR2
//CH0
#define ADC_Config_SMPRx_Sample_0_Cyc_1_5 0x00000000
#define ADC_Config_SMPRx_Sample_0_Cyc_7_5 0x00000001
#define ADC_Config_SMPRx_Sample_0_Cyc_13_5 0x00000002
#define ADC_Config_SMPRx_Sample_0_Cyc_28_5 0x00000003
#define ADC_Config_SMPRx_Sample_0_Cyc_41_5 0x00000004
#define ADC_Config_SMPRx_Sample_0_Cyc_55_5 0x00000005
#define ADC_Config_SMPRx_Sample_0_Cyc_71_5 0x00000006
#define ADC_Config_SMPRx_Sample_0_Cyc_239_5 0x00000007
//CH1
#define ADC_Config_SMPRx_Sample_1_Cyc_1_5 0x00000000<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_7_5 0x00000001<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_13_5 0x00000002<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_28_5 0x00000003<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_41_5 0x00000004<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_55_5 0x00000005<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_71_5 0x00000006<<3
#define ADC_Config_SMPRx_Sample_1_Cyc_239_5 0x00000007<<3
//CH2
#define ADC_Config_SMPRx_Sample_2_Cyc_1_5 0x00000000<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_7_5 0x00000001<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_13_5 0x00000002<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_28_5 0x00000003<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_41_5 0x00000004<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_55_5 0x00000005<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_71_5 0x00000006<<6
#define ADC_Config_SMPRx_Sample_2_Cyc_239_5 0x00000007<<6
//CH3
#define ADC_Config_SMPRx_Sample_3_Cyc_1_5 0x00000000<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_7_5 0x00000001<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_13_5 0x00000002<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_28_5 0x00000003<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_41_5 0x00000004<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_55_5 0x00000005<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_71_5 0x00000006<<9
#define ADC_Config_SMPRx_Sample_3_Cyc_239_5 0x00000007<<9
//CH4
#define ADC_Config_SMPRx_Sample_4_Cyc_1_5 0x00000000<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_7_5 0x00000001<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_13_5 0x00000002<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_28_5 0x00000003<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_41_5 0x00000004<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_55_5 0x00000005<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_71_5 0x00000006<<12
#define ADC_Config_SMPRx_Sample_4_Cyc_239_5 0x00000007<<12
//CH5
#define ADC_Config_SMPRx_Sample_5_Cyc_1_5 0x00000000<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_7_5 0x00000001<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_13_5 0x00000002<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_28_5 0x00000003<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_41_5 0x00000004<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_55_5 0x00000005<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_71_5 0x00000006<<15
#define ADC_Config_SMPRx_Sample_5_Cyc_239_5 0x00000007<<15
//CH6
#define ADC_Config_SMPRx_Sample_6_Cyc_1_5 0x00000000<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_7_5 0x00000001<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_13_5 0x00000002<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_28_5 0x00000003<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_41_5 0x00000004<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_55_5 0x00000005<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_71_5 0x00000006<<18
#define ADC_Config_SMPRx_Sample_6_Cyc_239_5 0x00000007<<18
//CH7
#define ADC_Config_SMPRx_Sample_7_Cyc_1_5 0x00000000<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_7_5 0x00000001<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_13_5 0x00000002<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_28_5 0x00000003<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_41_5 0x00000004<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_55_5 0x00000005<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_71_5 0x00000006<<21
#define ADC_Config_SMPRx_Sample_7_Cyc_239_5 0x00000007<<21
//CH8
#define ADC_Config_SMPRx_Sample_8_Cyc_1_5 0x00000000<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_7_5 0x00000001<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_13_5 0x00000002<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_28_5 0x00000003<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_41_5 0x00000004<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_55_5 0x00000005<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_71_5 0x00000006<<24
#define ADC_Config_SMPRx_Sample_8_Cyc_239_5 0x00000007<<24
//CH9
#define ADC_Config_SMPRx_Sample_9_Cyc_1_5 0x00000000<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_7_5 0x00000001<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_13_5 0x00000002<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_28_5 0x00000003<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_41_5 0x00000004<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_55_5 0x00000005<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_71_5 0x00000006<<27
#define ADC_Config_SMPRx_Sample_9_Cyc_239_5 0x00000007<<27
//配置函数
/*ADC1-1 ADC2-2
CHX-ADC_Channel
Sample_time-:
0:Sample_9_Cyc_1_5
1:Sample_9_Cyc_7_5
2:Sample_9_Cyc_13_5
3:SMPRx_Sample_9_Cyc_28_5
4:Sample_9_Cyc_41_5
5:Sample_9_Cyc_55_5
6:Sample_9_Cyc_71_5
7:Sample_9_Cyc_239_5
*/
static inline void ADC_Set_Sample_time(unsigned char ADCX,unsigned char CHX,unsigned char Sample_time)
{
    switch(ADCX)
    {
        case 1:
        {
            if(CHX<10)
            {
                ADC1->ADC1_SMPR1 = ADC1->ADC1_SMPR1&~(0x00000007<<CHX);
                ADC1->ADC1_SMPR1 = ADC1->ADC1_SMPR1|(Sample_time<<CHX);
            }
            else if(CHX<18)
            {
                ADC1->ADC1_SMPR2 = ADC1->ADC1_SMPR2&~(0x00000007<<(CHX-9));
                ADC1->ADC1_SMPR2 = ADC1->ADC1_SMPR2|(Sample_time<<(CHX-9));
            }
            else
            {
                break;
            }
            break;
        }
        case 2:
        {
            if(CHX<10)
            {
                ADC2->ADC2_SMPR1 = ADC2->ADC2_SMPR1&~(0x00000007<<CHX);
                ADC2->ADC2_SMPR1 = ADC2->ADC2_SMPR1|(Sample_time<<CHX);
            }
            else if(CHX<18)
            {
                ADC2->ADC2_SMPR2 = ADC2->ADC2_SMPR2&~(0x00000007<<(CHX-9));
                ADC2->ADC2_SMPR2 = ADC2->ADC2_SMPR2|(Sample_time<<(CHX-9));
            }
            else
            {
                break;
            }
            break;
        }
        default:
        {
            break;
        }
    }
}

//ADC_JOFRx x=1..4 注入通道x的数据偏移 12位
/*ADCX ADC1-1 ADC2-2
CHX: Injected Channel x x=1-4;
offset 11bit
*/
static inline void ADC_Set_ADC_JOFR(unsigned char ADCX,unsigned char CHX,unsigned int offset)
{
    switch(CHX)
    {
        case 1:
        {
            if(ADCX==1)
            {
                ADC1->ADC1_JOFR1 = offset&0X00000FFF;
            }
            else if(ADCX==2)
            {
                ADC2->ADC2_JOFR1 = offset&0X00000FFF;
            }
            else
            {
                break;
            }
            break;
        }
        case 2:
        {
            if(ADCX==1)
            {
                ADC1->ADC1_JOFR2 = offset&0X00000FFF;
            }
            else if(ADCX==2)
            {
                ADC2->ADC2_JOFR2 = offset&0X00000FFF;
            }
            else
            {
                break;
            }
            break;
        }
        case 3:
        {
            if(ADCX==1)
            {
                ADC1->ADC1_JOFR3 = offset&0X00000FFF;
            }
            else if(ADCX==2)
            {
                ADC2->ADC2_JOFR3 = offset&0X00000FFF;
            }
            else
            {
                break;
            }
            break;
        }
        case 4:
        {
            if(ADCX==1)
            {
                ADC1->ADC1_JOFR4 = offset&0X00000FFF;
            }
            else if(ADCX==2)
            {
                ADC2->ADC2_JOFR4 = offset&0X00000FFF;
            }
            else
            {
                break;
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
//ADC_HTR 模拟看门狗高阀值
static inline void ADC_Set_ADC_HTR(unsigned char ADCX,unsigned int ADC_HTR)
{
    switch(ADCX)
    {
        case 1:
        {
            ADC1->ADC1_HTR = ADC_HTR&0X00000FFF;
            break;
        }
        case 2:
        {
            ADC2->ADC2_HTR = ADC_HTR&0X00000FFF;
            break;
        }
        default:
        {
            break;
        }
    }
}
//ADC_LRT 模拟看门狗低阀值
static inline void ADC_Set_ADC_LRT(unsigned char ADCX,unsigned int ADC_LRT)
{
    switch(ADCX)
    {
        case 1:
        {
            ADC1->ADC1_LRT = ADC_LRT&0X00000FFF;
            break;
        }
        case 2:
        {
            ADC2->ADC2_LRT = ADC_LRT&0X00000FFF;
            break;
        }
        default:
        {
            break;
        }
    }
}
//ADC1_SQRx
//SQR1设置通道数
//SQR1 13 14 15 16 (config_Num)<<5*(offset)
//SQR2 7 8 9 10 11 12 (config_Num)<<5*(offset)
//SQR3 1 2 3 4 5 6 (config_Num)<<5*(offset)
/*ADCX ADC1-1 ADC2-2
CHX Regular Channel
num 优先数字
*/
static inline void ADC_Set_ADCx_SQRx_Channel_Priority(unsigned char ADCX,unsigned char CHX,unsigned char num)
{
    switch(ADCX)
    {
        case 1:
        {
            if(CHX<7)
            {
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1&~(0x0000001F<<(CHX-1)*5);
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1|(num<<(CHX-1)*5);
            }
            else if(CHX<12)
            {
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1&~(0x0000001F<<(CHX-7)*5);
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1|(num<<(CHX-7)*5);
            }
            else if(CHX<16)
            {
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1&~(0x0000001F<<(CHX-12)*5);
                ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1|(num<<(CHX-12)*5);
            }
            else
            {
                break;
            }
            break;
        }
        case 2:
        {
            if(CHX<7)
            {
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1&~(0x0000001F<<(CHX-1)*5);
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1|(num<<(CHX-1)*5);
            }
            else if(CHX<12)
            {
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1&~(0x0000001F<<(CHX-7)*5);
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1|(num<<(CHX-7)*5);
            }
            else if(CHX<16)
            {
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1&~(0x0000001F<<(CHX-12)*5);
                ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1|(num<<(CHX-12)*5);
            }
            else
            {
                break;
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
/*ADCX ADC1-1 ADC2-2
Total_num 总数
*/
static inline void ADC_Set_ADCx_SQRx_Num(unsigned char ADCX,unsigned char Total_num)
{
    switch(ADCX)
    {
        case 1:
        {
            ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1&~(0x00F00000);
            ADC1->ADC1_SQR1 = ADC1->ADC1_SQR1|(Total_num<<20);
            break;
        }
        case 2:
        {
            ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1&~(0x00F00000);
            ADC2->ADC2_SQR1 = ADC2->ADC2_SQR1|(Total_num<<20);
            break;
        }
        default:
        {
            break;
        }
    }
}

//ADC_JSQR 1 2 3 4 JL[1:0]:Inject_Length (config_num)<<5
/*ADCX ADC1-1 ADC2-2
CHX Injected Channel
num 优先数字
*/
static inline void ADC_Set_ADCx_JSQR_Channel_Priority(unsigned char ADCX,unsigned char CHX,unsigned char num)
{
    switch(ADCX)
    {
        case 1:
        {
            if(CHX<5)
            {
                ADC1->ADC1_JSQR = ADC1->ADC1_JSQR&~(0x0000001F<<(CHX-1)*5);
                ADC1->ADC1_JSQR = ADC1->ADC1_JSQR|(num<<(CHX-1)*5);
            }
            else
            {
                break;
            }
            break;
        }
        case 2:
        {
            if(CHX<5)
            {
                ADC2->ADC2_JSQR = ADC2->ADC2_JSQR&~(0x0000001F<<(CHX-1)*5);
                ADC2->ADC2_JSQR = ADC2->ADC2_JSQR|(num<<(CHX-1)*5);
            }
            else
            {
                break;
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
/*ADCX ADC1-1 ADC2-2
Total_num 总数
*/
static inline void ADC_Set_ADCx_JSQR_Num(unsigned char ADCX,unsigned char Total_num)
{
    switch(ADCX)
    {
        case 1:
        {
            ADC1->ADC1_JSQR = ADC1->ADC1_JSQR&~(0x00300000);
            ADC1->ADC1_JSQR = ADC1->ADC1_JSQR|(Total_num<<20);
            break;
        }
        case 2:
        {
            ADC2->ADC2_JSQR = ADC2->ADC2_JSQR&~(0x00300000);
            ADC2->ADC2_JSQR = ADC2->ADC2_JSQR|(Total_num<<20);
            break;
        }
        default:
        {
            break;
        }
    }
}

#endif