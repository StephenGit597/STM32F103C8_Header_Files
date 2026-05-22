/*-----------------------------------*/
/*          Designer:Stephen         */
/*           SWU_AI_2024_1           */
/*-----------------------------------*/
/*
代码作者:童培源 指导老师:吴洁宁
此作品仅限于STM32F103C8T6的寄存器开发学习，非ST官方文件，若使用STM32打比赛或者做实际开发
请注意参照技术手册检查以及实际调试确保动作功能无误
本作品部分寄存器声明可能存在错误 若发现问题 欢迎联系勘误
本人联系方式 手机：15922924882 QQ：25391607@qq.com github:StephenGit597
*/
#ifndef STM32F103C8T6_h
#define STM32F103C8T6_h
//CPU外设
#include"STM32F103C8_NVIC.h"
#include"STM32F103C8_DMA.h"
#include"STM32F103C8_watchdog.h"
#include"STM32F103C8_i_watchdog.h"
#include"STM32F103C8_FLASH.h"
#include"STM32F103C8_BKP.h"
#include"STM32F103C8_CRC_h"
//电源控制
#include"STM32F103C8_PWR.h"
//时钟树
#include"STM32F103C8_RCC.h"
//RTC
#include"STM32F103C8_RTC.h"
//基本输入输出
#include"STM32F103C8_GPIO.h"
#include"STM32F103C8_AFIO.h"
//定时器
#include"STM32F103C8_TIMx.h"
//通讯外设
#include"STM32F103C8_USART.h"
#include"STM32F103C8_I2C.h"
//模拟数字外设
#include"STM32F103C8_ADC.h"


#endif