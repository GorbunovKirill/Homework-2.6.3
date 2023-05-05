#include "figure.h"
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









