#pragma once
extern int i;
class Game 
{
    private:
		int outhand_;//外界的出拳的种类，剪刀--0，石头--1，布--2
		int inhand_;//系统内部的出拳种类
		int win;//自动对战中先手策略赢的局数
		int draw;//自动对战中平局的局数
		int lose;//自动对战中先手策略输的局数
		int amount;//amount代表自动对战的局数
    public:
		Game();
		void initialize();//在每次自动对战的最开始将win、draw、lose、amount的值设为0
		void setGame(int outhand, int inhand);
		int checkwin();//判赢函数,站在外界(即outhand）的角度上
		double winrate();//计算第一种策略的胜率(自动对战)
		int getWin();
		int getDraw();
		int getLose();
		void setAmount(int f);
		int getAmount();
};
