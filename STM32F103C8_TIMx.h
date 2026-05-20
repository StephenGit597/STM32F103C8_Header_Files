/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_TIMx_h
#define STM32F103C8_TIMx_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*定时器*/
//定时器基地址常量定义
#define TIM1_BASE 0x40012C00
#define TIM2_BASE 0x40000000
#define TIM3_BASE 0x40000400
#define TIM4_BASE 0x40000800
//定时器基地址定义
#define TIM1 ((Typedef_Advance_Timer*)TIM1_BASE)
#define TIM2 ((Typedef_General_Timer*)TIM2_BASE)
#define TIM3 ((Typedef_General_Timer*)TIM3_BASE)
#define TIM4 ((Typedef_General_Timer*)TIM4_BASE)
/*高级定时器*/
typedef struct
{
	volatile uint32_t CR1;   //偏移量0x00 Control Register 1
	volatile uint32_t CR2;   //偏移量0x04 Control Register 2
	volatile uint32_t SMCR;  //偏移量0x08 Slave Mode Control Register
	volatile uint32_t DIER;  //偏移量0x0C DMA/Interrupt Enable Register
	volatile uint32_t SR;    //偏移量0x10 Status Register
	volatile uint32_t EGR;   //偏移量0x14 Event Generation Registere
	volatile uint32_t CCMR1; //偏移量0x18 Capture/Compare Mode Register 1
	volatile uint32_t CCMR2; //偏移量0x1C Capture/Compare Mode Register 2
	volatile uint32_t CCER;  //偏移量0x20 Capture/Compare Enable Register
	volatile uint32_t CNT;   //偏移量0x24 Counter Register
	volatile uint32_t PSC;   //偏移量0x28 Prescaler Register
	volatile uint32_t ARR;   //偏移量0x2C Auto-Reload Register
	volatile uint32_t RCR;   //偏移量0x30 Repetition Counter Register
	volatile uint32_t CCR1;  //偏移量0x34 Capture/Compare Register 1
	volatile uint32_t CCR2;  //偏移量0x38 Capture/Compare Register 2
	volatile uint32_t CCR3;  //偏移量0x3C Capture/Compare Register 3
	volatile uint32_t CCR4;  //偏移量0x40 Capture/Compare Register 4
	volatile uint32_t BDTR;  //偏移量0x44 Break and Dead-Time Register
	volatile uint32_t DCR;   //偏移量0x48 DMA Control Register
	volatile uint32_t DMAR;  //偏移量0x4C DMA Address for Register Access
}Typedef_Advance_Timer;
/*通用寄存器*/
typedef struct
{
	volatile uint32_t CR1;   //偏移量0x00 Control Register 1
	volatile uint32_t CR2;   //偏移量0x04 Control Register 2
	volatile uint32_t SMCR;  //偏移量0x08 Slave Mode Control Register
	volatile uint32_t DIER;  //偏移量0x0C DMA/Interrupt Enable Register
	volatile uint32_t SR;    //偏移量0x10 Status Register
	volatile uint32_t EGR;   //偏移量0x14 Event Generation Registere
	volatile uint32_t CCMR1; //偏移量0x18 Capture/Compare Mode Register 1
	volatile uint32_t CCMR2; //偏移量0x1C Capture/Compare Mode Register 2
	volatile uint32_t CCER;  //偏移量0x20 Capture/Compare Enable Register
	volatile uint32_t CNT;   //偏移量0x24 Counter Register
	volatile uint32_t PSC;   //偏移量0x28 Prescaler Register
	volatile uint32_t ARR;   //偏移量0x2C Auto-Reload Register
	volatile uint32_t None1;   //偏移量0x30 占位符
	volatile uint32_t CCR1;  //偏移量0x34 Capture/Compare Register 1
	volatile uint32_t CCR2;  //偏移量0x38 Capture/Compare Register 2
	volatile uint32_t CCR3;  //偏移量0x3C Capture/Compare Register 3
	volatile uint32_t CCR4;  //偏移量0x40 Capture/Compare Register 4
	volatile uint32_t None2;  //偏移量0x44 占位符
	volatile uint32_t DCR;   //偏移量0x48 DMA Control Register
	volatile uint32_t DMAR;  //偏移量0x4C DMA Address for Register Access
}Typedef_General_Timer;

//Control Register 1
#define TIMx_CR1_Config_CEN 0x00000001
//禁止更新时间
#define TIMx_CR1_Config_Update_Disable 0x00000002
//触发模式
#define TIMx_CR1_Config_Update_trigger_software 0x00000004
//计数溢出后是否重装载
#define TIMx_CR1_Config_Update_operation 0x00000000
#define TIMx_CR1_Config_Update_operation_Dsiable 0x00000008
//计数方向
#define TIMx_CR1_Config_Count_Up 0x00000000
#define TIMx_CR1_Config_Count_Down 0x000000010
//计数器更新模式
#define TIMx_CR1_Config_Disable_Center_aligned 0x00000000
#define TIMx_CR1_Config_Update_when_count_up 0x00000020
#define TIMx_CR1_Config_Update_when_count_Down 0x00000040
#define TIMx_CR1_Config_Update_when_count_Up_Down 0x00000060
//ARR PRE
#define TIMx_CR1_Config_ARR_Pre_Enable 0x00000080
//CKD时钟分频
#define TIMx_CR1_Config_CKD_None 0x00000000
#define TIMx_CR1_Config_CKD_2 0x000000100
#define TIMx_CR1_Config_CKD_4 0x000000200

//Control Register 2
#define TIMx_advance_CR2_Config_Capture_compare_Preload_Enable 0x00000001
#define TIMx_advance_CR2_Config_Capture_compare_Update_Preload_Enable 0x00000004
#define TIMx_advance_CR2_Config_Capture_compare_Trigger_DMA_Dnable 0x00000008
//主机模式选择
#define TIMx_CR2_Config_Master_Mode_Reset 0x00000000
#define TIMx_CR2_Config_Master_Mode_Enable 0x00000010
#define TIMx_CR2_Config_Master_Mode_Update 0x00000020
#define TIMx_CR2_Config_Master_Mode_Compare_Pulse 0x00000030
#define TIMx_advance_CR2_Config_Master_Mode_CR2_Config_Master_Mode_OC1REF 0x00000040
#define TIMx_advance_CR2_Config_Master_Mode_CR2_Config_Master_Mode_OC2REF 0x00000050
#define TIMx_advance_CR2_Config_Master_Mode_CR2_Config_Master_Mode_OC3REF 0x00000060
#define TIMx_advance_CR2_Config_Master_Mode_CR2_Config_Master_Mode_OC4REF 0x00000070
//TL选择
#define TIMx_CR2_Config_Tl1_combation_XOR_Enable 0x00000080
//通道对应GPIO引脚空闲电平
#define TIMx_advance_CR2_Config_OIS1_CH1_high 0x00000100
#define TIMx_advance_CR2_Config_OIS1N_CH1N_high 0x00000200
#define TIMx_advance_CR2_Config_OIS2_CH2_high 0x00000400
#define TIMx_advance_CR2_Config_OIS2N_CH2N_high 0x00000800
#define TIMx_advance_CR2_Config_OIS3_CH3_high 0x00001000
#define TIMx_advance_CR2_Config_OIS3N_CH3N_high 0x00002000
#define TIMx_advance_CR2_Config_OIS4_CH4_high 0x00004000

//Slave Mode Control Register
//从模式
#define TIMx_SMCR_Config_Slave_mode_Disable 0x00000000
#define TIMx_SMCR_Config_Slave_mode_TI2_Count 0x00000001
#define TIMx_SMCR_Config_Slave_mode_TI1_Count 0x00000002
#define TIMx_SMCR_Config_Slave_mode_TI1_TI2_Count 0x00000003
#define TIMx_SMCR_Config_Slave_mode_Reset 0x00000004
#define TIMx_SMCR_Config_Slave_mode_Gate 0x00000005
#define TIMx_SMCR_Config_Slave_mode_Trigger 0x00000006
#define TIMx_SMCR_Config_Slave_mode_extern_clk 0x00000007
//Trigger Input
#define TIMx_SMCR_Config_Trigger_TIM2_TRGO 0x00000000
#define TIMx_SMCR_Config_Trigger_TIM1_TRGO 0x00000010
#define TIMx_SMCR_Config_Trigger_TIM3_TRGO 0x00000020
#define TIMx_SMCR_Config_Trigger_TIM4_TRGO 0x00000030
#define TIMx_SMCR_Config_Trigger_TI1_edge_dection 0x00000040
#define TIMx_SMCR_Config_Trigger_filterd_TI1 0x00000050
#define TIMx_SMCR_Config_Trigger_filterd_TI2 0x00000060
#define TIMx_SMCR_Config_Trigger_External_Trigger 0x00000070
#define TIMx_SMCR_Config_Master_Slave_Delay_compensation 0x00000080
//引脚信号进行数字滤波
#define TIMx_SMCR_Config_Extern_trigger_filter_1 0x00001000
#define TIMx_SMCR_Config_Extern_trigger_filter_2 0x00002000
#define TIMx_SMCR_Config_Extern_trigger_filter_3 0x00003000
#define TIMx_SMCR_Config_Extern_trigger_filter_4 0x00004000
#define TIMx_SMCR_Config_Extern_trigger_filter_5 0x00005000
#define TIMx_SMCR_Config_Extern_trigger_filter_6 0x00006000
#define TIMx_SMCR_Config_Extern_trigger_filter_7 0x00007000
#define TIMx_SMCR_Config_Extern_trigger_filter_8 0x00008000
#define TIMx_SMCR_Config_Extern_trigger_filter_9 0x00009000
#define TIMx_SMCR_Config_Extern_trigger_filter_A 0x0000A000
#define TIMx_SMCR_Config_Extern_trigger_filter_B 0x0000B000
#define TIMx_SMCR_Config_Extern_trigger_filter_C 0x0000C000
#define TIMx_SMCR_Config_Extern_trigger_filter_D 0x0000D000
#define TIMx_SMCR_Config_Extern_trigger_filter_E 0x0000E000
#define TIMx_SMCR_Config_Extern_trigger_filter_F 0x0000F000
#define TIMx_SMCR_Config_Extern_trigger_Pre_None 0x00000000
//外部触发信号分频
#define TIMx_SMCR_Config_Extern_trigger_Pre_2 0x00001000
#define TIMx_SMCR_Config_Extern_trigger_Pre_4 0x00002000
#define TIMx_SMCR_Config_Extern_trigger_Pre_8 0x00003000
//外部时钟使能
#define TIMx_SMCR_Config_External_Clock_Enable 0x00004000
//ETR引脚的有效边沿极性
#define TIMx_SMCR_Config_External_Trigger_Polarity_Rising 0x00000000
#define TIMx_SMCR_Config_External_Trigger_Polarity_Falling 0x00008000

//DMA/Interrupt Enable Register
//Update 更新中断
#define TIMx_DIER_Config_Update_Interrupt_Enable 0x00000001
//Capture/Compare x Interrupt Enable
#define TIMx_DIER_Config_Capture_Compare_1_Interrupt_Enable 0x00000002
#define TIMx_DIER_Config_Capture_Compare_2_Interrupt_Enable 0x00000004
#define TIMx_DIER_Config_Capture_Compare_3_Interrupt_Enable 0x00000008
#define TIMx_DIER_Config_Capture_Compare_4_Interrupt_Enable 0x00000010
//COM Interrupt Enable
#define TIMx_DIER_Config_COM_Interrupt_Enable 0x00000020
//Trigger Interrupt Enable
#define TIMx_DIER_Config_Trigger_Interrupt_Enable 0x00000040
//Update DMA Request Enable
#define TIMx_DIER_Config_Break_Interrupt_Enable 0x00000080
//Capture/Compare x DMA Request Enable
#define TIMx_DIER_Config_Update_DMA_Request_Enable 0x00000100
#define TIMx_DIER_Config_Capture_Compare_1_DMA_Request_Enable 0x00000200
#define TIMx_DIER_Config_Capture_Compare_2_DMA_Request_Enable 0x00000400
#define TIMx_DIER_Config_Capture_Compare_3_DMA_Request_Enable 0x00000800
#define TIMx_DIER_Config_Capture_Compare_4_DMA_Request_Enable 0x00001000
//COM DMA Request Enable
#define TIMx_DIER_Config_COM_DMA_Request_Enable 0x00002000
//Trigger DMA Request Enable
#define TIMx_DIER_Config_Trigger_DMA_Request_Enable 0x00004000

//Status Register
//更新事件发生
#define TIMx_SR_Flag_Update_Interrupt_Flag 0x00000001
//通道 x 事件
#define TIMx_SR_Flag_Capture_Compare_1_Interrupt_Flag 0x00000002
#define TIMx_SR_Flag_Capture_Compare_2_Interrupt_Flag 0x00000003
#define TIMx_SR_Flag_Capture_Compare_3_Interrupt_Flag 0x00000004
#define TIMx_SR_Flag_Capture_Compare_4_Interrupt_Flag 0x00000010
//通信事件
#define TIMx_SR_Flag_COM_Interrupt_Flag 0x00000020
//触发事件
#define TIMx_SR_Flag_Trigger_Interrupt_Flag 0x00000040
//刹车事件
#define TIMx_SR_Flag_Break_Interrupt_Flag 0x00000080
//通道 x 捕获溢出
#define TIMx_SR_Flag_Capture_Compare_1_Overcapture_Flag 0x00000200
#define TIMx_SR_Flag_Capture_Compare_2_Overcapture_Flag 0x00000400
#define TIMx_SR_Flag_Capture_Compare_3_Overcapture_Flag 0x00000800
#define TIMx_SR_Flag_Capture_Compare_4_Overcapture_Flag 0x00001000

//Event Generation Register 手动模拟事件触发
//生成更新事件
#define TIMx_EGR_Config_UG_Update_Generation 0x00000001
//触发通道 x 比较事件
#define TIMx_EGR_Config_Capture_Compare_1_Generation 0x00000002
#define TIMx_EGR_Config_Capture_Compare_2_Generation 0x00000004
#define TIMx_EGR_Config_Capture_Compare_3_Generation 0x00000008
#define TIMx_EGR_Config_Capture_Compare_4_Generation 0x00000010
//触发通信事件
#define TIMx_EGR_Config_COM_Generation 0x00000020
//生成触发事件
#define TIMx_EGR_Config_Trigger_Generation 0x00000040
//模拟刹车(Break)事件
#define TIMx_EGR_Config_Break_Generation 0x00000080

//Capture/Compare Mode Register 1
//Capture/Compare CH1  
#define TIMx_Capture_Compare_Mode_Register_CCR1_TI1_Input 0x00000001
#define TIMx_Capture_Compare_Mode_Register_CCR1_TI2_Input 0x00000002
//CH1 output mode
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Output_Compare_1_Fast_Enable 0x00000004
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_CCR1_preload_Enable 0x00000008
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Frozen 0x00000000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Match_Active 0x00000010
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Match_Inactive 0x00000020
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Toggle 0x00000030
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Force_Inactive 0x00000040
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_Force_Active 0x00000050
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_PWM_Mode_1 0x00000060
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_PWM_Mode_2 0x00000070
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_1_clear_enable 0x00000080
//CH1 inpput mode
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_1_no_prescaler 0x00000000
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_1_done_every_2_events 0x00000004
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_1_done_every_4_events 0x00000008
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_1_done_every_8_events 0x0000000C
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_1 0x00000010
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_2 0x00000020
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_3 0x00000030
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_4 0x00000040
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_5 0x00000050
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_6 0x00000060
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_7 0x00000070
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_8 0x00000080
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_9 0x00000090
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_A 0x000000A0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_B 0x000000B0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_C 0x000000C0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_D 0x000000D0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_E 0x000000E0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_1_filter_F 0x000000F0
//Capture/Compare CH2  
#define TIMx_Capture_Compare_Mode_Register_input_mode_CCR2_TI1_Input 0x00000100
#define TIMx_Capture_Compare_Mode_Register_input_mode_CCR2_TI1_Input 0x00000200
//CH2 output mode
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Output_Compare_1_Fast_Enable 0x00000400
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_CCR1_preload_Enable 0x00000800
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Frozen 0x00000000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Match_Active 0x00001000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Match_Inactive 0x00002000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Toggle 0x00003000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Force_Inactive 0x00004000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_Force_Active 0x00005000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_PWM_Mode_1 0x00006000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_PWM_Mode_2 0x00007000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_2_clear_enable 0x00008000
//CH2 inpput mode
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_2_no_prescaler 0x00000000
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_2_done_every_2_events 0x00000400
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_2_done_every_4_events 0x00000800
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_2_done_every_8_events 0x00000C00
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_1 0x00001000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_2 0x00002000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_3 0x00003000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_4 0x00004000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_5 0x00005000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_6 0x00006000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_7 0x00007000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_8 0x00008000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_9 0x00009000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_A 0x0000A000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_B 0x0000B000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_C 0x0000C000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_D 0x0000D000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_E 0x0000E000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_2_filter_F 0x0000F000

//Capture/Compare Mode Register 2
//Capture/Compare CH3  
#define TIMx_Capture_Compare_Mode_Register_CCR3_TI1_Input 0x00000001
#define TIMx_Capture_Compare_Mode_Register_CCR3_TI2_Input 0x00000002
//CH3 output mode
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Output_Compare_1_Fast_Enable 0x00000004
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_CCR1_preload_Enable 0x00000008
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Frozen 0x00000000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Match_Active 0x00000010
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Match_Inactive 0x00000020
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Toggle 0x00000030
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Force_Inactive 0x00000040
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_Force_Active 0x00000050
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_PWM_Mode_1 0x00000060
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_PWM_Mode_2 0x00000070
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_3_clear_enable 0x00000080
//CH3 inpput mode
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_3_no_prescaler 0x00000000
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_3_done_every_2_events 0x00000004
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_3_done_every_4_events 0x00000008
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_3_done_every_8_events 0x0000000C
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_1 0x00000010
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_2 0x00000020
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_3 0x00000030
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_4 0x00000040
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_5 0x00000050
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_6 0x00000060
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_7 0x00000070
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_8 0x00000080
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_9 0x00000090
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_A 0x000000A0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_B 0x000000B0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_C 0x000000C0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_D 0x000000D0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_E 0x000000E0
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_3_filter_F 0x000000F0
//Capture/Compare CH4  
#define TIMx_Capture_Compare_Mode_Register_input_mode_CCR4_TI1_Input 0x00000100
#define TIMx_Capture_Compare_Mode_Register_input_mode_CCR4_TI1_Input 0x00000200
//CH4 output mode
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Output_Compare_1_Fast_Enable 0x00000400
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_CCR1_preload_Enable 0x00000800
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Frozen 0x00000000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Match_Active 0x00001000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Match_Inactive 0x00002000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Toggle 0x00003000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Force_Inactive 0x00004000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_Force_Active 0x00005000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_PWM_Mode_1 0x00006000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_PWM_Mode_2 0x00007000
#define TIMx_Capture_Compare_Mode_Register_Output_mode_Compare_4_clear_enable 0x00008000
//CH4 inpput mode
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_4_no_prescaler 0x00000000
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_4_done_every_2_events 0x00000400
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_4_done_every_4_events 0x00000800
#define TIMx_Capture_Compare_Mode_Register_input_mode_capture_4_done_every_8_events 0x00000C00
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_1 0x00001000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_2 0x00002000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_3 0x00003000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_4 0x00004000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_5 0x00005000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_6 0x00006000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_7 0x00007000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_8 0x00008000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_9 0x00009000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_A 0x0000A000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_B 0x0000B000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_C 0x0000C000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_D 0x0000D000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_E 0x0000E000
#define TIMx_Capture_Compare_Mode_Register_input_mode_Input_Capture_4_filter_F 0x0000F000

//Capture/Compare Enable Register
//CH1----------------------------------------------------------------
#define TIMx_CCER_CC1E_Capture_Compare_1_Output_Enable 0x00000001
//CH1 输出模式
#define TIMx_CCER_CC1P_Capture_Compare_1_Polarity_high 0x00000002
//CH1 输入模式
#define TIMx_CCER_CC1P_Capture_Compare_1_Capture_Rising 0x00000000
#define TIMx_CCER_CC1P_Capture_Compare_1_Capture_Falling 0x00000002
//互补通道
#define TIMx_CCER_CC1NE_Complementary_Output_Enable 0x00000004
//互补通道空闲电平
#define TIMx_CCER_CC1NP_Complementary_Output_Polarity_high 0x00000008
//CH2----------------------------------------------------------------
#define TIMx_CCER_CC2E_Capture_Compare_2_Output_Enable 0x00000010
//CH2 输出模式
#define TIMx_CCER_CC2P_Capture_Compare_2_Polarity_high 0x00000020
//CH2 输入模式
#define TIMx_CCER_CC2P_Capture_Compare_2_Capture_Rising 0x00000000
#define TIMx_CCER_CC2P_Capture_Compare_2_Capture_Falling 0x00000020
//互补通道
#define TIMx_CCER_CC2NE_Complementary_Output_Enable 0x00000040
//互补通道空闲电平
#define TIMx_CCER_CC2NP_Complementary_Output_Polarity_high 0x00000080
//CH3----------------------------------------------------------------
#define TIMx_CCER_CC3E_Capture_Compare_3_Output_Enable 0x00000100
//CH3 输出模式
#define TIMx_CCER_CC3P_Capture_Compare_3_Polarity_high 0x00000200
//CH3 输入模式
#define TIMx_CCER_CC3P_Capture_Compare_3_Capture_Rising 0x00000000
#define TIMx_CCER_CC3P_Capture_Compare_3_Capture_Falling 0x00000200
//互补通道
#define TIMx_CCER_CC3NE_Complementary_Output_Enable 0x00000400
//互补通道空闲电平
#define TIMx_CCER_CC3NP_Complementary_Output_Polarity_high 0x00000800
//CH4----------------------------------------------------------------
#define TIMx_CCER_CC4E_Capture_Compare_4_Output_Enable 0x00001000
//CH4 输出模式
#define TIMx_CCER_CC4P_Capture_Compare_4_Polarity_high 0x00002000
//CH4 输入模式
#define TIMx_CCER_CC4P_Capture_Compare_4_Capture_Rising 0x00000000
#define TIMx_CCER_CC4P_Capture_Compare_4_Capture_Falling 0x00002000
//互补通道
#define TIMx_CCER_CC4NE_Complementary_Output_Enable 0x00004000
//互补通道空闲电平
#define TIMx_CCER_CC4NP_Complementary_Output_Polarity_high 0x00008000

//Counter Register

//Prescaler Register

//Auto-Reload Register

//Repetition Counter Register

//----------------------Capture/Compare Register 1
//输出模式：存储比较值，用于与 CNT 比较，决定 PWM 占空比
//输入模式：硬件自动写入捕获时刻的 CNT 值，作为时间戳

//----------------------Capture/Compare Register 2
//输出模式：存储比较值，用于与 CNT 比较，决定 PWM 占空比
//输入模式：硬件自动写入捕获时刻的 CNT 值，作为时间戳

//----------------------Capture/Compare Register 3
//输出模式：存储比较值，用于与 CNT 比较，决定 PWM 占空比
//输入模式：硬件自动写入捕获时刻的 CNT 值，作为时间戳

//----------------------Capture/Compare Register 4
//输出模式：存储比较值，用于与 CNT 比较，决定 PWM 占空比
//输入模式：硬件自动写入捕获时刻的 CNT 值，作为时间戳

//Break and Dead-Time Register
//死区时间设置 bit7-bot0
//锁定等级
#define TIMx_BDTR_Config_LOCK_OFF 0x00000000
#define TIMx_BDTR_Config_LOCK_Level_1 0x00000100
#define TIMx_BDTR_Config_LOCK_Level_2 0x00000200
#define TIMx_BDTR_Config_LOCK_Level_3 0x00000300
//使能刹车输入
#define TIMx_BDTR_Config_BKE_Break_Enable 0x00001000
//刹车极性(0=高电平有效,1=低电平有效）
#define TIMx_BDTR_Config_BKP_Break_Polarity_high 0x00000000
#define TIMx_BDTR_Config_BKP_Break_Polarity_low 0x00002000
//AOE Automatic Output Enable
#define TIMx_BDTR_Config_AOE_Automatic_Output_Enable 0x00004000
//MOE Main Output Enable 全局使能所有输出
#define TIMx_BDTR_Config_Main Output 0x00008000

//DMA Control Register
//bit0 bit1 bit2 bit3 bit4 DBA[4:0] DMA Base Address 突发传输的起始寄存器
//bit8 bit9 bit10 bit11 bit12 DBL[4:0] 一次触发需要连续传输的寄存器个数
//DMA 控制器读写 DMAR 时，硬件会根据 DCR 的配置，自动映射到真实的定时器寄存器组
#define TIMx_DMA_Control_Register_Base_TIMx_CR1 0x00000000
#define TIMx_DMA_Control_Register_Base_TIMx_CR2 0x00000001
#define TIMx_DMA_Control_Register_Base_TIMx_SMCR 0x00000010
#define TIMx_DMA_Control_Register_Base_TIMx_CCMR1 0x00000110
#define TIMx_DMA_Control_Register_Base_TIMx_CCER 0x00001000
#define TIMx_DMA_Control_Register_Base_TIMx_PSC 0x00001010
#define TIMx_DMA_Control_Register_Base_TIMx_ARR 0x00001011
#define TIMx_DMA_Control_Register_Base_TIMx_RCR 0x00001100
#define TIMx_DMA_Control_Register_Base_TIMx_CCR1 0x00001101
#define TIMx_DMA_Control_Register_Base_TIMx_CCR2 0x00001110
#define TIMx_DMA_Control_Register_Base_TIMx_CCR3 0x00001111
#define TIMx_DMA_Control_Register_Base_TIMx_CCR4 0x00010000

#endif