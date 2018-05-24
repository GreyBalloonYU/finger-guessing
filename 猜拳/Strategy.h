#pragma once
extern int formerhand;
extern int i;
class Strategy 
{
    protected:
		int hand_;//策略所要出拳的种类
    public:
		Strategy();
		Strategy(int hand);
		int getHand();
		void setHand(int hand);
};