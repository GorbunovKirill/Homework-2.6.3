#include"triangle.h"
#include"right_tri.h"

right_tri::right_tri(int a, int b, int c, int  A, int B) :triangle(a, b, c, A, B, 90) {
	name = "Прямоугольный треугольник: ";
}

