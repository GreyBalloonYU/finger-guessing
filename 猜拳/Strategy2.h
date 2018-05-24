#pragma once
#include "Strategy.h"
//使用赢得上一轮的出拳策略
extern int formerhand;
extern int i;
extern int first;
class Strategy2:public Strategy
{
     public:
	    Strategy2();
		void sethand2();
};
