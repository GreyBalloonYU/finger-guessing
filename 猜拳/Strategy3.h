#pragma once
#include"Strategy.h"
#include<string>
//��ȭ����һ�ֳ�ȭ���Բ�ͬ
extern int a;
class Strategy3 :public Strategy 
{
    private:
	    int formerhand;//��һ�ֵĳ�ȭ
    public:
		Strategy3();
		void sethand3();
		int getFormerhand();
};
