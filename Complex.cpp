#include "Complex.h"


// Add function definitions here
// Constructor function
Complex::Complex(float re, float im)
{
	real = re;
	imaginary = im;
	modulus = SetMod(real,imaginary);
}

//Mod function computes the modulus of the complex number.
Complex::SetMod(real,imaginary)
{
	modulus = sqrt(pow(real,2) + pow(imaginary,2));
}

Complex::Mod()
{
	return modulus;
}

