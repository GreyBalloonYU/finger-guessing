#pragma once
#include"Strategy.h"
#include<string>
//出拳跟上一轮出拳绝对不同
extern int formerhand;
extern int a;
class Strategy3 :public Strategy 
{
    public:
		Strategy3();
		void sethand3();
};
