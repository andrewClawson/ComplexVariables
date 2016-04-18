#include "Complex.h"

// Add function definitions here
Complex::Complex(float re, float im)
{
	real = re;
	imaginary = im;
}

Complex::Mod()
{
	mod = sqrt(pow(real,2) + pow(imaginary,2));
}

