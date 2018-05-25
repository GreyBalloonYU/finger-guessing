#include<iostream>
#include"Game.h"
//剪刀--0，石头--1，布--2
Game::Game() {
	win = 0;
	draw = 0;
	lose = 0;
	amount = 0;
}
void Game::setGame(int outhand, int inhand) {
	outhand_ = outhand;
	inhand_ = inhand;
}

int Game::checkwin() {
	if (outhand_ == 0 && inhand_ == 0) {
		i = 0;
		draw++;
		return 0; //0为平局
	}
	else if (outhand_ == 0 && inhand_ == 1) {
		i = 1;
		lose++;
		return -1;//-1为输
	}
	else if (outhand_ == 0 && inhand_ == 2) {
		i = -1;
		win++;
		return 1;//1为赢
	}
	else if (outhand_ == 1 && inhand_ == 0) {
		i = -1;
		win++;
		return 1;
	}
	else if (outhand_ == 1 && inhand_ == 1) {
		i = 0;
		draw++;
		return 0;
	}
	else if (outhand_ == 1 && inhand_ == 2) {
		i = 1;
		lose++;
		return -1;
	}
	else if (outhand_ == 2 && inhand_ == 0) {
		i = 1;
		lose++;
		return -1;
	}
	else if (outhand_ == 2 && inhand_ == 1) {
		i = -1;
		win++;
		return 1;
	}
	else if (outhand_ == 2 && inhand_ == 2) {
		i = 0;
		draw++;
		return 0;
	}
}

double Game::winrate() {
	double rate = win * 100 / amount;
	return rate;
}

void Game::initialize() {
	win = 0;
	draw = 0;
	lose = 0;
	amount = 0;
}

int Game::getWin() {
	return win;
}

int Game::getDraw() {
	return draw;
}

int Game::getLose() {
	return lose;
}

void Game::setAmount(int f) {
	amount = f;
}

int Game::getAmount() {
	return amount;
}