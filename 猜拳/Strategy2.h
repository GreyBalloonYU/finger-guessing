#pragma once
#include "Strategy.h"
//使用赢得上一轮的出拳策略
extern int i;
extern int first;
class Strategy2:public Strategy
{
     private:
		 int formerhand;//上一轮的出拳
     public:
	    Strategy2();
		void sethand2();
		int getFormerhand();
};
