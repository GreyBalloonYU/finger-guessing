#pragma once
extern int formerhand;
extern int i;
class Strategy 
{
    protected:
		int hand_;//������Ҫ��ȭ������
    public:
		Strategy();
		Strategy(int hand);
		int getHand();
		void setHand(int hand);
};