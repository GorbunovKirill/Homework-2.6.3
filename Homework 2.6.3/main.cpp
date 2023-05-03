#include "Source.h"
#include <iostream>
#include <windows.h>


int main() {
	setlocale(LC_ALL, "Russian");


	triangle first(45, 33, 23, 64, 75, 83);
	quadrangle second(84, 74, 65, 50, 46, 34, 22, 14);
	right_tri third(40, 55, 34, 73, 80);
	isos_tri fourth(20, 30, 40, 50);
	equil_tri fith(80);
	rectangle sixth(20, 40);
	square seventh(50);
	parallelogram eighth(75, 32, 56, 33);
	rhomb ninth(40, 30, 120);


	figure* one = &first;
	one->print_info();

	figure* two = &second;
	two->print_info();

	figure* three = &third;
	three->print_info();

	figure* four = &fourth;
	four->print_info();

	figure* five = &fith;
	five->print_info();

	figure* six = &sixth;
	six->print_info();

	figure* seven = &seventh;
	seven->print_info();

	figure* eight = &eighth;
	eight->print_info();

	figure* nine = &ninth;
	nine->print_info();


	return 0;
}
