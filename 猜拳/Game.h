#pragma once
extern int i;
extern int win;
extern int draw;
extern int lose;
class Game 
{
    private:
		int outhand_;//���ĳ�ȭ�����࣬����--0��ʯͷ--1����--2
		int inhand_;//ϵͳ�ڲ��ĳ�ȭ����
    public:
		Game();
		void setGame(int outhand, int inhand);
		int checkwin();//��Ӯ����,վ�����(��outhand���ĽǶ���
		double winrate(int amount);//�����һ�ֲ��Ե�ʤ��(�Զ���ս)
};
