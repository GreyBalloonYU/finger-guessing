#pragma once
#include"Strategy.h"
#include<string>
//出拳跟上一轮出拳绝对不同
extern int a;
class Strategy3 :public Strategy 
{
    private:
	    int formerhand;//上一轮的出拳
    public:
		Strategy3();
		void sethand3();
		int getFormerhand();
};
