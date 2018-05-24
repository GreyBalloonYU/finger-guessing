#include <iostream>
#include"Strategy3.h"
#include<stdlib.h>
Strategy3::Strategy3() {
	hand_ = 0;
	formerhand = 0;
}

void Strategy3::sethand3() {
	if (a == 1) {
		a = 0;
		hand_ = (rand() * 123 + rand() * 59) % 3;
		formerhand = hand_;
	}
	else {
		do {
			hand_ = (rand() * 123 + rand() * 59) % 3;
		} while (hand_ == formerhand);
		formerhand = hand_;
	}
}

int Strategy3::getFormerhand() {
	return formerhand;
}