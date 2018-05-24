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
//剪刀--0，石头--1，布--2
using namespace std;
int i = 0;//用来判断上一轮电脑(第二个策略后手)是否赢了，赢--1,平--0,输:-1
//int formerhand = 0;//上一轮的出拳
int a = 1;//是否为第一轮猜拳
int win = 0;//自动对战中第一种策略赢的局数
int draw = 0;//自动对战中平局的局数
int lose = 0;//自动对战中第一种策略输的局数
int first = 1;//判断在自动对战中第二种策略是先手还是后手，0--先手，1--后手
time_t t;

int main() {
	srand((unsigned)time(&t));
	int e = 0;
	int hand = 0;
	int choose1 = 0, choose2 = 0, amount = 0;//记录选择策略的变量，amount代表自动对战的局数
	string outside, inside;
	Strategy a;
	Strategy1 b,b2;
	Strategy2 c,c2;
	Strategy3 d,d2;
	Game result;
	cout << "欢迎进入剪刀石头布的游戏" << endl;
	cout << "请选择模式:" << endl;
	cout << "1.人机对战  2.AI自动对战" << endl;
	cin >> e;
	switch (e) {
	case 1:
		while (1) {
			cout << "你想出什么? 1.剪刀 2.石头 3.布" << endl;
			cin >> hand;
			int hand1 = hand - 1;
			a.setHand(hand1);
			cout << "选择AI猜拳策略:1.完全随机地决定出拳策略 2.使用赢得上一轮的出拳策略 3.出拳跟上一轮出拳绝对不同" << endl;
			cin >> e;
			switch (e) {
			case 1:
				b.sethand1();
				if (a.getHand() == 0) {
					outside = "剪刀";
				}
				else if (a.getHand() == 1) {
					outside = "石头";
				}
				else if (a.getHand() == 2) {
					outside = "布";
				}
				if (b.getHand() == 0) {
					inside = "剪刀";
				}
				else if (b.getHand() == 1) {
					inside = "石头";
				}
				else if (b.getHand() == 2) {
					inside = "布";
				}
				cout << "你出的是:" << outside << "  电脑出的是:" << inside << endl;
				result.setGame(a.getHand(), b.getHand());
				if (result.checkwin() == 0) {
					cout << "平局" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "你输了" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "你赢了" << endl;
				}
				break;
			case 2:
				c.sethand2();
				if (a.getHand() == 0) {
					outside = "剪刀";
				}
				else if (a.getHand() == 1) {
					outside = "石头";
				}
				else if (a.getHand() == 2) {
					outside = "布";
				}
				if (c.getHand() == 0) {
					inside = "剪刀";
				}
				else if (c.getHand() == 1) {
					inside = "石头";
				}
				else if (c.getHand() == 2) {
					inside = "布";
				}
				cout << "你出的是:" << outside << "  电脑出的是:" << inside << endl;
				result.setGame(a.getHand(), c.getHand());
				if (result.checkwin() == 0) {
					cout << "平局" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "你输了" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "你赢了" << endl;
				}
				break;
			case 3:
				d.sethand3();
				if (a.getHand() == 0) {
					outside = "剪刀";
				}
				else if (a.getHand() == 1) {
					outside = "石头";
				}
				else if (a.getHand() == 2) {
					outside = "布";
				}
				if (d.getHand() == 0) {
					inside = "剪刀";
				}
				else if (d.getHand() == 1) {
					inside = "石头";
				}
				else if (d.getHand() == 2) {
					inside = "布";
				}
				cout << "你出的是:" << outside << "  电脑出的是:" << inside << endl;
				result.setGame(a.getHand(), d.getHand());
				if (result.checkwin() == 0) {
					cout << "平局" << endl;
				}
				else if (result.checkwin() == -1) {
					cout << "你输了" << endl;
				}
				else if (result.checkwin() == 1) {
					cout << "你赢了" << endl;
				}
				break;
			}
		}break;
	case 2:
       while (1) {
		   win = 0;
		   draw = 0;
		   lose = 0;
			cout << "选择先手AI策略:1.完全随机地决定出拳策略 2.使用赢得上一轮的出拳策略 3.出拳跟上一轮出拳绝对不同" << endl;
			cin >> choose1;
			cout << "选择后手AI策略:1.完全随机地决定出拳策略 2.使用赢得上一轮的出拳策略 3.出拳跟上一轮出拳绝对不同" << endl;
			cin >> choose2;
			cout << "请输入比赛的局数(猜几次拳)" << endl;
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
			cout << "先手AI策略赢的局数为:" << win << "  平的局数为:" << draw << "  输的局数为:" << lose << "  胜率为:" << result.winrate(amount) << "%"<<endl;
			cout << "总局数为:" << amount << endl;
		}break;
	}
	system("pause");
	return 0;
}