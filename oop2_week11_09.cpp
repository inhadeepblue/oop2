#include <iostream>
using namespace std;
class Complex{
public:
	Complex(int r, int i) : real(r), imaginary(i){}
	Complex add(const Complex& right)	{
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;
		return Complex(real, imag);
	}
	int Real() const { return real; }
	int Imaginary() const { return imaginary; }
private:
	int real;		// 실수부
	int imaginary;	// 허수부
};
int main() {
	Complex c1(1, 1);
	Complex c2(7, 2);
	Complex c3(0, 0);

	c3 = c1.add(c2); // c3 = c1 + c2;
	cout << c3.Real() << ", " << c3.Imaginary() << endl;
	return 0;
}
