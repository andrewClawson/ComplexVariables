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

//Definition for Static Add method.
Complex::Add(Complex z1, Complex z2)
{
	float _real = z1.Re() + z2.Re(); //Add real components
	float _imaginary = z1.Im() + z2.Im(); // Add imaginary components
	return Complex(_real,_imaginary);
}

//Definition for static Subtract method.
Complex::Subtract(Complex z2, Complex z2)
{
	float _real = z1.Re() - z2.Re();
	float _imaginary = z1.Im() - z2.Im();
	return Complex(_real,_imaginary);
}