#ifndef CHAT_HANDLER_H
#define CHAT_HANDLER_H

#include"ChatHandler_Config.h"


void chat_vInit(ChatChannelHandler_t Self);


void chat_vTask(void);

ChatErrorStatus_t chat_enuSendMessage(u8 *ZeroCpyMsg,u8 MsgSize,void (*SendCBF)(void));


ChatErrorStatus_t chat_enuRecieveMessage(u8 *ZeroCpyMsg,u8 MsgSize,void (*RecCBF)(void));





#endif