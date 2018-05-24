#include<iostream>
#include"Strategy1.h"
#include<time.h>
#include<stdlib.h>

Strategy1::Strategy1() {
	hand_ = 0;
}

void Strategy1::sethand1() {
    hand_ = (rand() * 123 + rand() * 59) % 3;
}