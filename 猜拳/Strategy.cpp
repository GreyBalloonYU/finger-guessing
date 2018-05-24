#include "Strategy.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

Strategy::Strategy() {
	hand_ = 0;
}

Strategy::Strategy(int hand) {
	hand_ = hand;
}

int Strategy::getHand() {
	return hand_;
}

void Strategy::setHand(int hand) {
	hand_ = hand;
}
