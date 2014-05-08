#include "headers.hpp"


int pointer::getx() {return x;}
int pointer::gety() {return y;}
void pointer::setx(int a) {x=a;}
void pointer::sety(int a) {y=a;}


void pointer::advance(int max_x){
	x+1 > max_x ? y++ : y=y;
}
