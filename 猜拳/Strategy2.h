#pragma once
#include "Strategy.h"
//ʹ��Ӯ����һ�ֵĳ�ȭ����
extern int i;
extern int first;
class Strategy2:public Strategy
{
     private:
		 int formerhand;//��һ�ֵĳ�ȭ
     public:
	    Strategy2();
		void sethand2();
		int getFormerhand();
};
