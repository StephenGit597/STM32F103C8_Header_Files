/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
#ifndef STM32F103C8_DMA_h
#define STM32F103C8_DMA_h
//必要头文件引用
#include <stdint.h>//C99位宽头文件

/*DMA外设*/
//DMA1地址常量定义
#define DMA1_BASE 0x40020000
//DMA寄存器定义
#define DMA1_ISR (*(volatile uint32_t*)(DMA1_BASE + 0x00))    //Interrupt Status Register
#define DMA1_IFCR (*(volatile uint32_t*)(DMA1_BASE + 0x04))   //Interrupt Flag Clear Register
//DMA通道结构体定义
typedef struct
{
	volatile uint32_t CCRx; // Channel Configuration Register
	volatile uint32_t CNDTR;// Channel Number of Data To Transfer Register
	volatile uint32_t CPAR; // Channel Peripheral Address Register
	volatile uint32_t CMAR; // Channel Memory Address Register
	volatile uint32_t None;
}Typedef_DMA_Channel;
//DMA通道寄存器组定义
#define DMA1_Channel1   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x08))
#define DMA1_Channel2   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x1C))
#define DMA1_Channel3   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x30))
#define DMA1_Channel4   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x44))
#define DMA1_Channel5   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x58))
#define DMA1_Channel6   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x6C))
#define DMA1_Channel7   ((Typedef_DMA_Channel *)(DMA1_BASE + 0x80))

//Interrupt Status Register
#define DMA1_ISR_CH1_Global_Interrupt_Flag 0x00000001
#define DMA1_ISR_CH1_Transfer_Complete_Interrupt_Flag 0x00000002
#define DMA1_ISR_CH1_Half_Transfer_Interrupt_Flag 0x00000004
#define DMA1_ISR_CH1_Transfer_Error_Interrupt_Flag 0x00000008
#define DMA1_ISR_CH2_Global_Interrupt_Flag 0x00000010
#define DMA1_ISR_CH2_Transfer_Complete_Interrupt_Flag 0x00000020
#define DMA1_ISR_CH2_Half_Transfer_Interrupt_Flag 0x00000040
#define DMA1_ISR_CH2_Transfer_Error_Interrupt_Flag 0x00000080
#define DMA1_ISR_CH3_Global_Interrupt_Flag 0x00000100
#define DMA1_ISR_CH3_Transfer_Complete_Interrupt_Flag 0x00000200
#define DMA1_ISR_CH3_Half_Transfer_Interrupt_Flag 0x00000400
#define DMA1_ISR_CH3_Transfer_Error_Interrupt_Flag 0x00000800
#define DMA1_ISR_CH4_Global_Interrupt_Flag 0x00001000
#define DMA1_ISR_CH4_Transfer_Complete_Interrupt_Flag 0x00002000
#define DMA1_ISR_CH4_Half_Transfer_Interrupt_Flag 0x00004000
#define DMA1_ISR_CH4_Transfer_Error_Interrupt_Flag 0x00008000
#define DMA1_ISR_CH5_Global_Interrupt_Flag 0x00010000
#define DMA1_ISR_CH5_Transfer_Complete_Interrupt_Flag 0x00020000
#define DMA1_ISR_CH5_Half_Transfer_Interrupt_Flag 0x00040000
#define DMA1_ISR_CH5_Transfer_Error_Interrupt_Flag 0x00080000
#define DMA1_ISR_CH6_Global_Interrupt_Flag 0x00100000
#define DMA1_ISR_CH6_Transfer_Complete_Interrupt_Flag 0x00200000
#define DMA1_ISR_CH6_Half_Transfer_Interrupt_Flag 0x00400000
#define DMA1_ISR_CH6_Transfer_Error_Interrupt_Flag 0x00800000
#define DMA1_ISR_CH7_Global_Interrupt_Flag 0x01000000
#define DMA1_ISR_CH7_Transfer_Complete_Interrupt_Flag 0x02000000
#define DMA1_ISR_CH7_Half_Transfer_Interrupt_Flag 0x04000000
#define DMA1_ISR_CH7_Transfer_Error_Interrupt_Flag 0x08000000

//Interrupt Flag Clear Register 写1清除
#define DMA1_IFCR_CH1_Clear_Global_Interrupt_Flag 0x00000001
#define DMA1_IFCR_CH1_Clear_Transfer_Complete_Interrupt_Flag 0x00000002
#define DMA1_IFCR_CH1_Clear_Half_Transfer_Interrupt_Flag 0x00000004
#define DMA1_IFCR_CH1_Clear_Transfer_Error_Interrupt_Flag 0x00000008
#define DMA1_IFCR_CH2_Clear_Global_Interrupt_Flag 0x00000010
#define DMA1_IFCR_CH2_Clear_Transfer_Complete_Interrupt_Flag 0x00000020
#define DMA1_IFCR_CH2_Clear_Half_Transfer_Interrupt_Flag 0x00000040
#define DMA1_IFCR_CH2_Clear_Transfer_Error_Interrupt_Flag 0x00000080
#define DMA1_IFCR_CH3_Clear_Global_Interrupt_Flag 0x00000100
#define DMA1_IFCR_CH3_Clear_Transfer_Complete_Interrupt_Flag 0x00000200
#define DMA1_IFCR_CH3_Clear_Half_Transfer_Interrupt_Flag 0x00000400
#define DMA1_IFCR_CH3_Clear_Transfer_Error_Interrupt_Flag 0x00000800
#define DMA1_IFCR_CH4_Clear_Global_Interrupt_Flag 0x00001000
#define DMA1_IFCR_CH4_Clear_Transfer_Complete_Interrupt_Flag 0x00002000
#define DMA1_IFCR_CH4_Clear_Half_Transfer_Interrupt_Flag 0x00004000
#define DMA1_IFCR_CH4_Clear_Transfer_Error_Interrupt_Flag 0x00008000
#define DMA1_IFCR_CH5_Clear_Global_Interrupt_Flag 0x00010000
#define DMA1_IFCR_CH5_Clear_Transfer_Complete_Interrupt_Flag 0x00020000
#define DMA1_IFCR_CH5_Clear_Half_Transfer_Interrupt_Flag 0x00040000
#define DMA1_IFCR_CH5_Clear_Transfer_Error_Interrupt_Flag 0x00080000
#define DMA1_IFCR_CH6_Clear_Global_Interrupt_Flag 0x00100000
#define DMA1_IFCR_CH6_Clear_Transfer_Complete_Interrupt_Flag 0x00200000
#define DMA1_IFCR_CH6_Clear_Half_Transfer_Interrupt_Flag 0x00400000
#define DMA1_IFCR_CH6_Clear_Transfer_Error_Interrupt_Flag 0x00800000
#define DMA1_IFCR_CH7_Clear_Global_Interrupt_Flag 0x01000000
#define DMA1_IFCR_CH7_Clear_Transfer_Complete_Interrupt_Flag 0x02000000
#define DMA1_IFCR_CH7_Clear_Half_Transfer_Interrupt_Flag 0x04000000
#define DMA1_IFCR_CH7_Clear_Transfer_Error_Interrupt_Flag 0x08000000

//Channel Configuration Register
//使能DMA
#define DMA1_CCRx_CHX_DMA_Enable 0x00000001
//中断使能
#define DMA1_CCRx_CHX_Transfer_Complete_Interrupt_Enable 0x00000002
#define DMA1_CCRx_CHX_Half_Transfer_Interrupt_Enable 0x00000004
#define DMA1_CCRx_CHX_Transfer_Error_Interrupt_Enable 0x00000008
//数据传输方向
#define DMA1_CCRx_CHX_Data_Periphal_Memory 0x00000000
#define DMA1_CCRx_CHX_Data_Memory_Periphal 0x00000010
//循环模式
#define DMA1_CCRx_CHX_CIRC_Enable 0x00000020
//外设地址递增使能
#define DMA1_CCRx_CHX_Periphal_Address_increasing_Enable 0x00000040
//存储器地址你递增使能
#define DMA1_CCRx_CHX_Memory_Address_increasing_Enable 0x00000080
//Peripheral Size
#define DMA1_CCRx_CHX_Peripheral_Size_8 0x00000000
#define DMA1_CCRx_CHX_Peripheral_Size_16 0x00000100
#define DMA1_CCRx_CHX_Peripheral_Size_32 0x00000200
//Memory Size
#define DMA1_CCRx_CHX_Memory_Size_8 0x00000000
#define DMA1_CCRx_CHX_Memory_Size_16 0x00000400
#define DMA1_CCRx_CHX_Memory_Size_32 0x00000800

//Channel Number of Data To Transfer Register
//写入 CNDTRx = N 表示:DMA 将传输 N 个数据项

static inline void Set_DMA1_Transfer_num(unsigned char CHx,unsigned int num)
{
    if(CHx>7)
    {
        return;
    }
    switch(CHx)
    {
        case 1:
        {
            DMA1_Channel1->CNDTR=num;
            break;
        }
        case 2:
        {
            DMA1_Channel2->CNDTR=num;
            break;
        }
        case 3:
        {
            DMA1_Channel3->CNDTR=num;
            break;
        }
        case 4:
        {
            DMA1_Channel4->CNDTR=num;
            break;
        }
        case 5:
        {
            DMA1_Channel5->CNDTR=num;
            break;
        }
        case 6:
        {
            DMA1_Channel6->CNDTR=num;
            break;
        }
        case 7:
        {
            DMA1_Channel7->CNDTR=num;
            break;
        }
        default:
        {
            break;
        }
    }
}
//Channel Peripheral Address Register
//CPARx 存储的是外设数据寄存器的物理地址

//CMARx 存储的是 RAM 中用户缓冲区的首地址
//CCRx.MINC = 1(推荐)→ 每次传输后地址自动递增

#endif