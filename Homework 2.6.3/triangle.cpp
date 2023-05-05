#include "figure.h"
#include <iostream>
#include"triangle.h"

triangle::triangle(int a, int b, int c, int  A, int B, int C) {

	this->a = a; this->b = b, this->c = c;
	this->A = A; this->B = B, this->C = C;

	name = "Треугольник: ";
}

void triangle::print_info() {
	std::cout << get_name() << std::endl;
	std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << std::endl;
	std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
	std::cout << std::endl;
}