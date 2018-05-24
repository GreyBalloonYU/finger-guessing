#pragma once
extern int i;
extern int win;
extern int draw;
extern int lose;
class Game 
{
    private:
		int outhand_;//外界的出拳的种类，剪刀--0，石头--1，布--2
		int inhand_;//系统内部的出拳种类
    public:
		Game();
		void setGame(int outhand, int inhand);
		int checkwin();//判赢函数,站在外界(即outhand）的角度上
		double winrate(int amount);//计算第一种策略的胜率(自动对战)
};
