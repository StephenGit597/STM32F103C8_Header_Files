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

//Status Register
#define UASRTx_Status_Register_Parity_Error 0x00000001
#define UASRTx_Status_Register_Framing_Error 0x00000002
#define UASRTx_Status_Register_Noise_Flag 0x00000004
#define UASRTx_Status_Register_Overrun_Error 0x00000008
#define UASRTx_Status_Register_Idle_Line_Detect 0x00000010
#define UASRTx_Status_Register_Read_Data_Register_Not_Empty 0x00000020
#define UASRTx_Status_Register_Transmission_Complete 0x00000040
#define UASRTx_Status_Register_Transmit_Data_Register_Empty 0x00000080
#define UASRTx_Status_Register_LIN_Break_Detection 0x00000100
#define UASRTx_Status_Register_CTS_Flag 0x00000200

/*----------------------Data Register
写DR TDR(发送数据寄存器) 数据先写入 TDR,再自动移入移位寄存器发送
读DR RDR(接收数据寄存器) 接收到的数据先存入移位寄存器，再移入 RDR
CR1.M	数据长度	 DR有效位 常见模式
0         8位     [7:0]    常见
1         9位     [8:0]    不常见

----------------------Baud Rate Register
bit[3:0] DIV_Fraction 4位 波特率分频的小数部分
bit[15:4] DIV_Mantissa 12位 波特率分频的整数部分
*/

//Control Register 1
//置 1:发送一个断开字符(Break) 持续 10~13 个低电平位
#define UASRTx_Control_Register_1_Send_Break 0x00000001
//接收唤醒控制:0正常接收 1静音模式
#define UASRTx_Control_Register_1_Receiver_Wakeup_Control_receive_Usually 0x00000000
#define UASRTx_Control_Register_1_Receiver_Wakeup_Control_Mute_mode 0x00000002
//接收使能
#define UASRTx_Control_Register_1_Receiver_Enable 0x00000004
//发送使能
#define UASRTx_Control_Register_1_Transmitter_Enable 0x00000008
//中断使能
//空闲线检测中断使能
#define UASRTx_Control_Register_1_IDLE_Interrupt_Enable 0x00000010
//接收非空中断使能
#define UASRTx_Control_Register_1_RXNE_Interrupt Enable 0x00000020
//发送完成中断使能
#define UASRTx_Control_Register_1_Transmission_Complete 0x00000040
//发送空中断使能
#define UASRTx_Control_Register_1_TXE_Interrupt_Enable 0x00000080
//奇偶校验错误中断使能
#define UASRTx_Control_Register_1_Parity_Error_IE 0x00000100
//奇偶校验选择:0偶校验 1奇校验
#define UASRTx_Control_Register_1_Parity_Selection_Even 0x00000000
#define UASRTx_Control_Register_1_Parity_Selection_Odd 0x00000200
//奇偶校验使能
#define UASRTx_Control_Register_1_Parity_Control_Enable 0x00000400
//0空闲线唤醒 1地址标记唤醒
#define UASRTx_Control_Register_1_Wakeup_Method_0 0x00000800
//8位数据1 9位数据
#define UASRTx_Control_Register_1_Word_Length_8b 0x00000000
#define UASRTx_Control_Register_1_Word_Length_9b 0x00001000
//USART 使能
#define UASRTx_Control_Register_1_Enable_USART 0x00002000

//Control Register 2
//bit3-bit0 ADDRESS [3:0]
//(IN break detection length
#define UASRTx_Control_Register_2_LIN_break_detection_length_10 0x00000000
#define UASRTx_Control_Register_2_LIN_break_detection_length_11 0x00000020
//LIN break detection interrupt enable
#define UASRTx_Control_Register_2_LIN_break_detection_interrupt_enable 0x00000040
//Last bit clock pulse Enable 最后一位数据的时钟脉冲会从CK输出
#define UASRTx_Control_Register_2_Last_bit_clock_pulse_Enable 0x00000100
//Clock phase 在时钟的第x个边沿进行数据捕获
#define UASRTx_Control_Register_2_Clock_phase_First 0x00000000
#define UASRTx_Control_Register_2_Clock_phase_Second 0x00000200
//Clock polarity
#define UASRTx_Control_Register_2_Clock_polarity_low 0x00000000
#define UASRTx_Control_Register_2_Clock_polarity_high 0x00000400
//CK Clock enable
#define UASRTx_Control_Register_2_CK_Clock enable 0x00000800
//STOP bits
#define UASRTx_Control_Register_2_STOP_bits_1 0x00000000
#define UASRTx_Control_Register_2_STOP_bits_0_5 0x00001000
#define UASRTx_Control_Register_2_STOP_bits_2 0x00002000
#define UASRTx_Control_Register_2_STOP_bits_1_5 0x00003000
//LIN mode enable
#define UASRTx_Control_Register_2_LIN_mode_enable 0x00004000

//Control Register 3
#define UASRTx_Control_Register_3_Error_interrupt_enable 0x00000001
#define UASRTx_Control_Register_3_IrDA_mode_enable 0x00000002
#define UASRTx_Control_Register_3_IrDA_low_power 0x00000004
#define UASRTx_Control_Register_3_Half_duplex_selection 0x00000008
#define UASRTx_Control_Register_3_Smartcard_NACK_enable 0x00000010
#define UASRTx_Control_Register_3_Smartcard_mode_enable 0x00000020
#define UASRTx_Control_Register_3_DMA_enable_receiver 0x00000040
#define UASRTx_Control_Register_3_DMA_enable_transmitter 0x00000080
#define UASRTx_Control_Register_3_RTS_enable 0x00000100
#define UASRTx_Control_Register_3_CTS_enable 0x00000200
#define UASRTx_Control_Register_3_CTS_interrupt_enable 0x00000400

//Guard Time and Prescaler Register
//Prescaler value [7:0]
//PSC[4:0]

#endif