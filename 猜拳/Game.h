#pragma once
extern int i;
class Game 
{
    private:
		int outhand_;//���ĳ�ȭ�����࣬����--0��ʯͷ--1����--2
		int inhand_;//ϵͳ�ڲ��ĳ�ȭ����
		int win;//�Զ���ս�����ֲ���Ӯ�ľ���
		int draw;//�Զ���ս��ƽ�ֵľ���
		int lose;//�Զ���ս�����ֲ�����ľ���
		int amount;//amount�����Զ���ս�ľ���
    public:
		Game();
		void initialize();//��ÿ���Զ���ս���ʼ��win��draw��lose��amount��ֵ��Ϊ0
		void setGame(int outhand, int inhand);
		int checkwin();//��Ӯ����,վ�����(��outhand���ĽǶ���
		double winrate();//�����һ�ֲ��Ե�ʤ��(�Զ���ս)
		int getWin();
		int getDraw();
		int getLose();
		void setAmount(int f);
		int getAmount();
};
