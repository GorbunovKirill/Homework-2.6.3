#pragma once
#include "figure.h"


class triangle : public figure {

public:

	triangle(int a, int b, int c, int  A, int B, int C);

	void print_info() override;
};