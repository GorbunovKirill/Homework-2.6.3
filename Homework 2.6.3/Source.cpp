#include "Source.h"
#include <iostream>
int figure:: get_sides() {
		return sides;
	}
	std::string figure::get_name() {
		return name;
	}

	int figure::get_a() {
		return a;
	}
	int figure:: get_b() {
		return b;
	}
	int  figure:: get_c() {
		return c;
	}
	int  figure:: get_d() {
		return d;
	}
	int figure:: get_A() {
		return A;
	}
	int figure:: get_B() {
		return B;
	}
	int figure:: get_C() {
		return C;
	}
	int figure:: get_D() {
		return D;
	}

	figure::figure() { sides = 0; name = "Фигура: "; }

 void  figure:: print_info() {
		std::cout << get_name() << std::endl;
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << " " << get_d() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << " " << get_D() << std::endl;
		std::cout << std::endl;

	};

triangle::triangle(int a, int b, int c, int  A, int B, int C) {

		this->a = a; this->b = b, this->c = c;
		this->A = A; this->B = B, this->C = C;

		name = "Треугольник: ";
	}

	void triangle :: print_info() {
		std::cout << get_name() << std::endl;
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
		std::cout << std::endl;
	}


quadrangle::quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {

		this->a = a; this->b = b, this->c = c; this->d = d;
		this->A = A; this->B = B, this->C = C; this->D = D;
		name = "Четырёхугольник: ";
	}


right_tri::	right_tri(int a, int b, int c, int  A, int B) :triangle(a, b, c, A, B, 90) {
		name = "Прямоугольный треугольник: ";
	}


isos_tri::	isos_tri(int a, int b, int  A, int B) :triangle(a, b, a, A, B, A) {
		name = "Равнобедренный треугольник: ";
	}

equil_tri::	equil_tri(int a) :triangle(a, a, a, 60, 60, 60) {
		name = "Равносторонний треугольник: ";
	}


rectangle::	rectangle(int a, int b) :quadrangle(a, b, a, b, 90, 90, 90, 90) {
		name = "Прямоугольник: ";
	}


square::square(int a) :quadrangle(a, a, a, a, 90, 90, 90, 90) {
		name = "Квадрат: ";
	}

parallelogram::	parallelogram(int a, int b, int A, int B) :quadrangle(a, b, a, b, A, B, A, B) {
		name = "Параллелограмм: ";
	}

rhomb::rhomb(int a, int A, int B) :quadrangle(a, a, a, a, A, B, A, B) {
		name = "Ромб: ";
	}


