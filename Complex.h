class Complex
{
	public:
		Complex(float re,float im);
		float Re(); // getter for the real component.
		float Im(); // getter for the imaginary component.
		void SetMod(); // setter for the modulus.
		float Mod(); // getter for the modulus.
		static Complex Add(Complex z1, Complex z2);

	private:
		float real;
		float imaginary;
		float modulus;

}


