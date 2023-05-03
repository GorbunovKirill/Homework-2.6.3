#pragma once
#include <string>

class figure {
protected:

	int sides;
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;

	int get_sides();
	std::string get_name();

	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();

public:

	figure();

	virtual void print_info();

};


class triangle : public figure {

public:

	triangle(int a, int b, int c, int  A, int B, int C);

	void print_info() override;
};


class quadrangle :public figure {

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D);

};

class right_tri :public triangle {
public:
	right_tri(int a, int b, int c, int  A, int B) ;
};

class isos_tri :public triangle {
public:
	isos_tri(int a, int b, int  A, int B) ;
};

class equil_tri :public triangle {
public:
	equil_tri(int a);
};

class rectangle :public quadrangle {
public:
	rectangle(int a, int b);
};

class square :public quadrangle {
public:
	square(int a);
};

class parallelogram :public quadrangle {
public:
	parallelogram(int a, int b, int A, int B);
};

class rhomb :public quadrangle {
public:
	rhomb(int a, int A, int B);
};

