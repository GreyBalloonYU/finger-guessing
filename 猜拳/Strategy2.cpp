#include <iostream>
#include"Strategy2.h"
#include<stdlib.h>

Strategy2::Strategy2() {
	hand_ = 0;
	formerhand = 0;
}

void Strategy2::sethand2() {
	if (i == 0&&first==1||i==-1&&first==1||i==1&&first==0) {
		hand_ = (rand() * 123 + rand() * 59) % 3;
		formerhand = hand_;
	}
	else if (i == 1&&first==1||i==-1&&first==0||i==0&&first==0) {
		hand_ = formerhand;
	}
}

int Strategy2::getFormerhand() {
	return formerhand;
}