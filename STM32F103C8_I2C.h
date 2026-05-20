/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_I2C_h
#define STM32F103C8_I2C_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*I2C寄存器*/
//I2C基地址常量定义
#define I2C1_BASE 0x40005400
#define I2C2_BASE 0x40005800
//I2C基地址定义
#define I2C1 ((Typedef_I2C *)I2C1_BASE)
#define I2C2 ((Typedef_I2C *)I2C2_BASE)
//I2C结构体定义
typedef struct 
{
	volatile uint32_t CR1;   //偏移量0x00 Control Register 1
	volatile uint32_t CR2;   //偏移量0x04 Control Register 2
	volatile uint32_t OAR1;  //偏移量0x08 Own Address Register 1
	volatile uint32_t OAR2;  //偏移量0x0C Own Address Register 2
	volatile uint32_t DR;    //偏移量0x10 Data Register
	volatile uint32_t SR1;   //偏移量0x14 Status Register 1
	volatile uint32_t SR2;   //偏移量0x18 Status Register 2
	volatile uint32_t CCR;   //偏移量0x1C Clock Control Register	
	volatile uint32_t TRISE; //偏移量0x20 TRISE Register	
}Typedef_I2C;

//Control Register 1
//Peripheral enable
#define I2Cx_Control_Register_1_Peripheral_enable 0x00000001
//SMBus mode
#define I2Cx_Control_Register_1_SMBus_modeenable 0x00000002
//SMBus type
#define I2Cx_Control_Register_1_SMBus_type_device 0x00000000
#define I2Cx_Control_Register_1_SMBus_type_host 0x00000008
//ARP enable
#define I2Cx_Control_Register_1_ARP_enable 0x00000010
//PEC enable
#define I2Cx_Control_Register_1_PEC_enable 0x00000020
//General call enable
#define I2Cx_Control_Register_1_General_call_enable 0x00000040
//禁止时钟延长(从模式) (Clock stretching disable (Slave mode)) 
#define I2Cx_Control_Register_1_Clock_stretching_disable 0x00000080
//Start generation
#define I2Cx_Control_Register_1_Start_generation 0x00000100
//Stop generation
#define I2Cx_Control_Register_1_Stop_generation 0x00000200
//Acknowledge enable
#define I2Cx_Control_Register_1_Acknowledge_enable 0x00000400
//应答/PEC位置(用于数据接收) (Acknowledge/PEC Position (for data reception)) 
#define I2Cx_Control_Register_1_Acknowledge_PEC_Position_ack_nack_current 0x00000000
#define I2Cx_Control_Register_1_Acknowledge_PEC_Position_ack_nack_next 0x00000800
//Packet error checking
#define I2Cx_Control_Register_1_Packet_error_checking 0x00001000
//SMBus alert
#define I2Cx_Control_Register_1_SMBus_alert 0x00002000
//Software reset
#define I2Cx_Control_Register_1_Software_reset 0x00008000

//Control Register 2
//bit0 bit1 bit2 bit3 bit4 bit5 FREQ[5:0] I2C 时钟输入频率 必须设置为 实际 APB1 时钟频率
//中断使能
//Error interrupt enable
#define I2Cx_Control_Register_2_Error_interrupt_enable_Error_interrupt_enable 0x00000100
//Event interrupt enable
#define I2Cx_Control_Register_2_Event_interrupt_enable_Event_interrupt_enable 0x00000200
//Buffer interrupt enable
#define I2Cx_Control_Register_2_Buffer_interrupt_enable_Buffer_interrupt_enable 0x00000400
//DMA
//DMA requests enable
#define I2Cx_Control_Register_2_DMA_requests_enable 0x00000800
#define I2Cx_Control_Register_2_DMA_last_transfer 0x00001000

//Own Address Register 1
//bit0 ADD0 7位地址模式时不用关心 10位地址模式时为地址第0位。
//ADD[7:1]：接口地址 (Interface address) 位7:1 地址的7~1位
//接口地址 (Interface address) 位9:8 7位地址模式时不用关心。 10位地址模式时为地址的9~8位。
//ADDMODE:寻址模式(从模式) (Addressing mode (slave mode)) 
#define I2Cx_Own_Address_Register_1_Addressing_mode_7bit 0x00000000
#define I2Cx_Own_Address_Register_1_Addressing_mode_10bit 0x00008000

//Own Address Register 2
//Dual addressing mode enable bit0
#define I2Cx_Own_Address_Register_2_Dual_addressing_mode_enable 0x00000001 
//ADD2[7:1]：接口地址 (Interface address) 在双地址模式下地址的7~1位。

//Data Register

//Status Register 1
//SB:起始位(主模式) (Start bit (Master mode)) 
#define I2Cx_Status_Register_1_Flag_Start_bit 0x00000001
//ADDR:地址已被发送(主模式)/地址匹配(从模式) (Address sent (master mode)/matched (slave mode)) 
#define I2Cx_Status_Register_1_Flag_Address_sent 0x00000002
//BTF:字节发送结束 (Byte transfer finished) 
#define I2Cx_Status_Register_1_Flag_Byte_transfer_finished 0x00000004
//ADD10:10位头序列已发送(主模式) (10-bit header sent (Master mode))
#define I2Cx_Status_Register_1_Flag_10_bit_header_sent 0x00000008
//STOPF:停止条件检测位(从模式) (Stop detection (slave mode)) 
#define I2Cx_Status_Register_1_Flag_Stop_detection 0x00000010
//RxNE:数据寄存器非空(接收时) (Data register not empty (receivers))
#define I2Cx_Status_Register_1_Flag_Data_register_not_empty 0x00000040
//TxE:数据寄存器为空(发送时) (Data register empty (transmitters))
#define I2Cx_Status_Register_1_Flag_Data_register_empty 0x00000080
//BERR:总线出错 (Bus error) 
#define I2Cx_Status_Register_1_Flag_Bus_error 0x00000100
//ARLO:仲裁丢失(主模式) (Arbitration lost (master mode))
#define I2Cx_Status_Register_1_Flag_Arbitration_lost 0x00000200
//AF:应答失败 (Acknowledge failure) 
#define I2Cx_Status_Register_1_Flag_Acknowledge_failure 0x00000400
//AF:应答失败 (Acknowledge failure) 
#define I2Cx_Status_Register_1_Flag_Overrun_Underrun 0x00000800
//PECERR:在接收时发生PEC错误 (PEC Error in reception)
#define I2Cx_Status_Register_1_Flag_PEC_Error_in_reception 0x00001000
//TIMEOUT:超时或Tlow错误 (Timeout or Tlow error)
#define I2Cx_Status_Register_1_Flag_Timeout_or_Tlow_error 0x00004000
//SMBALERT:SMBus提醒 (SMBus alert) 
#define I2Cx_Status_Register_1_Flag_SMBus_alert 0x00008000

//Status Register 2
//MSL:主从模式 (Master/slave) 0:从模式； 1:主模式。
#define I2Cx_Status_Register_2_flag_slave 0x00000000
#define I2Cx_Status_Register_2_flag_Master 0x00000001
//总线忙 (Bus busy)
#define I2Cx_Status_Register_2_flag_Bus_busy 0x00000002
//Transmitter/receiver
#define I2Cx_Status_Register_2_flag_data_has_been_received 0x00000000
#define I2Cx_Status_Register_2_flag_data_has_been_transmited 0x00000004
//广播呼叫地址(从模式) (General call address (Slave mode))
#define I2Cx_Status_Register_2_flag_General_call_address_received 0x00000010
//SMBus设备默认地址(从模式) (SMBus device default address (Slave mode))
#define I2Cx_Status_Register_2_flag_SMBus_device_default_address_received 0x00000020
//SMBHOST: SMBus主机头系列(从模式) (SMBus host header (Slave mode)) 
#define I2Cx_Status_Register_2_flag_SMBus_host_header_received 0x00000040
//双标志(从模式) (Dual flag (Slave mode)) 
#define I2Cx_Status_Register_2_flag_Dual_flag_OAR1 0x00000000
#define I2Cx_Status_Register_2_flag_Dual_flag_OAR2 0x00000080
//PEC[7:0]：数据包出错检测 (Packet error checking register)

//Clock Control Register
//CCR[11:0]	在标准模式下：决定 SCL 高/低电平时间,在快速模式下:结合DUTY位决定占空比
//DUTY:快速模式时的占空比 (Fast mode duty cycle)
#define I2Cx_Clock_Control_Register_duty_high_1_low_2 0x00000000
#define I2Cx_Clock_Control_Register_duty_high_9_low_16 0x00004000
//F/S:I2C主模式选项 (I2C master mode selection)
#define I2Cx_Clock_Control_Register_Sm_Mode 0x00000000
#define I2Cx_Clock_Control_Register_Fm_Mode 0x00008000

//----------------------TRISE Register
//bit0 bit1 bit2 bit3 bit4 bit5 TRISE[5:0] 最大上升时间设置 该值 = 最大上升时间(ns) ÷ TPCLK1(ns) + 1

#endif