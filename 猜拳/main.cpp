#include"Strategy.h"
#include"Strategy1.h"
#include"Strategy2.h"
#include"Strategy3.h"
#include"Game.h"
#include<iostream>
#include<string>
#include<stdlib.h>
#include<Windows.h>
#include<ctime>
//����--0��ʯͷ--1����--2
using namespace std;
int i = 0;//�����ж���һ�ֵ���(�ڶ������Ժ���)�Ƿ�Ӯ�ˣ�Ӯ--1,ƽ--0,��:-1
//int formerhand = 0;//��һ�ֵĳ�ȭ
int a = 1;//�Ƿ�Ϊ��һ�ֲ�ȭ
int win = 0;//�Զ���ս�е�һ�ֲ���Ӯ�ľ���
int draw = 0;//�Զ���ս��ƽ�ֵľ���
int lose = 0;//�Զ���ս�е�һ�ֲ�����ľ���
int first = 1;//�ж����Զ���ս�еڶ��ֲ��������ֻ��Ǻ��֣�0--���֣�1--����
time_t t;

int main() {
	srand((unsigned)time(&t));
	int e = 0;
	int hand = 0;
	int choose1 = 0, choose2 = 0, amount = 0;//��¼ѡ����Եı�����amount�����Զ���ս�ľ���
	string outside, inside;
	Strategy a;
	Strategy1 b,b2;
	Strategy2 c,c2;
	Strategy3 d,d2;
	Game result;
	cout << "��ӭ�������ʯͷ������Ϸ" << endl;
	cout << "��ѡ��ģʽ:" << endl;
	cout << "1.�˻���ս  2.AI�Զ���ս" << endl;
	cin >> e;
	switch (e) {
	case 1:
		while (1) {
			cout << "�����ʲô? 1.���� 2.ʯͷ 3.��" << endl;
			cin >> hand;
			int hand1 = hand - 1;
			a.setHand(hand1);
			cout << "ѡ��AI��ȭ����:1.��ȫ����ؾ�����ȭ���� 2.ʹ��Ӯ����һ�ֵĳ�ȭ���� 3.��ȭ����һ�ֳ�ȭ���Բ�ͬ" << endl;
			cin >> e;
			switch (e) {
			case 1:
				b.sethand1();
				if (a.getHand() == 0) {
					outside = "����";
				}
				else if (a.getHand() == 1) {
					outside = "ʯͷ";
				}
				else if (a.getHand() == 2) {
					outside = "��";
				}
				if (b.getHand() == 0) {
					inside = "����";
				}
				else if (b.getHand() == 1) {
					inside = "ʯͷ";
				}
				else if (b.getHand() == 2) {
					inside = "��";
				}
				cout << "�������:" << outside << "  ���Գ�����:" << inside << endl;
				result.setGame(a.getHand(), b.getHand());
				if (result.checkwin() == 0) {
					cout << "ƽ��" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "������" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "��Ӯ��" << endl;
				}
				break;
			case 2:
				c.sethand2();
				if (a.getHand() == 0) {
					outside = "����";
				}
				else if (a.getHand() == 1) {
					outside = "ʯͷ";
				}
				else if (a.getHand() == 2) {
					outside = "��";
				}
				if (c.getHand() == 0) {
					inside = "����";
				}
				else if (c.getHand() == 1) {
					inside = "ʯͷ";
				}
				else if (c.getHand() == 2) {
					inside = "��";
				}
				cout << "�������:" << outside << "  ���Գ�����:" << inside << endl;
				result.setGame(a.getHand(), c.getHand());
				if (result.checkwin() == 0) {
					cout << "ƽ��" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "������" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "��Ӯ��" << endl;
				}
				break;
			case 3:
				d.sethand3();
				if (a.getHand() == 0) {
					outside = "����";
				}
				else if (a.getHand() == 1) {
					outside = "ʯͷ";
				}
				else if (a.getHand() == 2) {
					outside = "��";
				}
				if (d.getHand() == 0) {
					inside = "����";
				}
				else if (d.getHand() == 1) {
					inside = "ʯͷ";
				}
				else if (d.getHand() == 2) {
					inside = "��";
				}
				cout << "�������:" << outside << "  ���Գ�����:" << inside << endl;
				result.setGame(a.getHand(), d.getHand());
				if (result.checkwin() == 0) {
					cout << "ƽ��" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "������" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "��Ӯ��" << endl;
				}
				break;
			}
		}break;
	case 2:
       while (1) {
		   win = 0;
		   draw = 0;
		   lose = 0;
			cout << "ѡ������AI����:1.��ȫ����ؾ�����ȭ���� 2.ʹ��Ӯ����һ�ֵĳ�ȭ���� 3.��ȭ����һ�ֳ�ȭ���Բ�ͬ" << endl;
			cin >> choose1;
			cout << "ѡ�����AI����:1.��ȫ����ؾ�����ȭ���� 2.ʹ��Ӯ����һ�ֵĳ�ȭ���� 3.��ȭ����һ�ֳ�ȭ���Բ�ͬ" << endl;
			cin >> choose2;
			cout << "����������ľ���(�¼���ȭ)" << endl;
			cin >> amount;
			if (choose1 == 1 && choose2==1) {
				for (int ch = 0; ch < amount; ch++) {
					b.sethand1();
					b2.sethand1();
					result.setGame(b.getHand(), b2.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 1 && choose2 == 2) {
				for (int ch = 0; ch < amount; ch++) {
					first = 1;
					b.sethand1();
					c.sethand2();
					result.setGame(b.getHand(), c.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 1 && choose2 == 3) {
				for (int ch = 0; ch < amount; ch++) {
					a = 1;
					b.sethand1();
					d.sethand3();
					result.setGame(b.getHand(), d.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 2 && choose2 == 1) {
				for (int ch = 0; ch < amount; ch++) {
					first = 0;
					c.sethand2();
					b.sethand1();
					result.setGame(c.getHand(), b.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 2 && choose2 == 2) {
				for (int ch = 0; ch < amount; ch++) {
					first = 0;
					c.sethand2();
					first = 1;
					c2.sethand2();
					result.setGame(c.getHand(), c2.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 2 && choose2 == 3) {
				for (int ch = 0; ch < amount; ch++) {
					a = 1;
					first = 0;
					c.sethand2();
					d.sethand3();
					result.setGame(b.getHand(), d.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 3 && choose2 == 1) {
				for (int ch = 0; ch < amount; ch++) {
					a = 1;
					d.sethand3();
					b.sethand1();
					result.setGame(d.getHand(), b.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 3 && choose2 == 2) {
				for (int ch = 0; ch < amount; ch++) {
					first = 1;
					a = 1;
					d.sethand3();
					c.sethand2();
					result.setGame(d.getHand(), c.getHand());
					result.checkwin();
				}
			}
			else if (choose1 == 3 && choose2 == 3) {
				for (int ch = 0; ch < amount; ch++) {
					d.sethand3();
					if (ch == 0)a = 1;
					d2.sethand3();
					result.setGame(d.getHand(), d2.getHand());
					result.checkwin();
				}
			}
			cout << "����AI����Ӯ�ľ���Ϊ:" << win << "  ƽ�ľ���Ϊ:" << draw << "  ��ľ���Ϊ:" << lose << "  ʤ��Ϊ:" << result.winrate(amount) << "%"<<endl;
			cout << "�ܾ���Ϊ:" << amount << endl;
		}break;
	}
	system("pause");
	return 0;
}