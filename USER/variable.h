#ifndef __VARIABLE_H_
#define __VARIABLE_H_


#include "include.h"
#include "config.h"
#include "custom_structure.h"
#include "extern_variable.h"

//状态字
workState_e workState;
Car_State CarState={Static_State,Static_State, //轮毂1 last now 
										Static_State,Static_State,
										Static_State,Static_State,
										Static_State,Static_State,
										Noturn_State,Noturn_State,
										Noturn_State,Noturn_State,
										Noturn_State,Noturn_State,
										Noturn_State,Noturn_State,};
//读值状态        归零状态     遥控状态 
int EncoderState=0,zeroState=0,spstate; 
s32 steering_speed               = 0;
s32 hubmotor_speed=0;
s32 hubmotor_speed_1=0;
s32 hubmotor_speed_2=0;
s32 hubmotor_speed_3=0;
s32 hubmotor_speed_4=0;
int plussubSpeedVaule            = 0;
u16 key; //遥控按键值
int InSituRotation_Flag          = 0;   
int returnToZero_Flag            = 0;

int sendSteeringControlCMD_Flag  = 0;																				//1允许发送 默认:0 不允许发送
int sendHubControlCMD_Flag       = 0;					  														//1允许发送 默认:0 不允许发送

u8 turnFlag=2;  //默认为2  无转向    0 左转  1 右转

//转向最大速度设置
u32 steering_Max_Speed_1=0;
u32 steering_Max_Speed_2=0;
u32 steering_Max_Speed_3=0;
u32 steering_Max_Speed_4=0;
										
u16 		hub_5_temp,		hub_6_temp,		hub_7_temp,		hub_8_temp;
u16  		hub_5_,				hub_6_,				hub_7_,				hub_8_;
u16     zero=0;

//测试加上的
float Hub_Delta5,Hub_Delta6,Hub_Delta7,Hub_Delta8; 
int hub_5_speed=0,hub_6_speed=0,hub_7_speed=0,hub_8_speed=0;
int hub_5_speed_last=0,hub_6_speed_last=0,hub_7_speed_last=0,hub_8_speed_last=0;
int hub_5_speed_last_last=0,hub_6_speed_last_last=0,hub_7_speed_last_last=0,hub_8_speed_last_last=0;
int speed_cnt_5=0,speed_cnt_6=0,speed_cnt_7=0,speed_cnt_8=0;
float speed_temp_5=0,speed_temp_6=0,speed_temp_7=0,speed_temp_8=0;
int	HubMotorPlusSubSpeed=10;
u16 hub_5_cnt=0,hub_6_cnt=0,hub_7_cnt=0,hub_8_cnt=0;

#endif

