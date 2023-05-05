#include"quadrangle.h"
#include"figure.h"
#include<iostream>


quadrangle::quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {

	this->a = a; this->b = b, this->c = c; this->d = d;
	this->A = A; this->B = B, this->C = C; this->D = D;
	name = "Четырёхугольник: ";
}

