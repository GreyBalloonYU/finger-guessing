#pragma once
#include"Strategy.h"
//完全随机地决定出拳策略
extern int formerhand;
extern int i;
class Strategy1:public Strategy
{
    public:
		Strategy1();
		void sethand1();
};
