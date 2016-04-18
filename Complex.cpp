#include "Complex.h"


// Add function definitions here
// Constructor function
Complex::Complex(float re, float im)
{
	real = re;
	imaginary = im;
	modulus = SetMod(real,imaginary);
}

//Getter for real component.
Complex::Re()
{
	return real;
}

//Getter for imaginary component.
Complex::Im()
{
	return imaginary;
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

Complex::Add(Complex c1, Complex c2)
{
	return Complex(
}

