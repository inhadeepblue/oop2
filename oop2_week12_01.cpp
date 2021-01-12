//#include <iostream>
//using namespace std;
//class Complex{
//	friend Complex operator+(const Complex& left, const Complex& right);
//
//public:
//	Complex(int r, int i) : real(r), imaginary(i){}
//	// c3 = c1 + c2;
//
//	//Complex operator+(const Complex& right)	{
//	//	int real = this->real + right.real;
//	//	int imag = this->imaginary + right.imaginary;
//	//	return Complex(real, imag);
//	//}
//
//	// 전치 연산
//	Complex operator++() {
//		this->real++;
//		return *this;
//	}
//	// 후치 연산
//	Complex operator++(int) {
//		Complex prev(this->real, this->imaginary);
//		this->real++;
//		return prev;
//	}
//
//	//Complex add(const Complex& right)	{
//	//	int real = this->real + right.real;
//	//	int imag = this->imaginary + right.imaginary;
//	//	return Complex(real, imag);
//	//}
//	int Real() const { return real; }
//	int Imaginary() const { return imaginary; }
//private:
//	int real;		// 실수부
//	int imaginary;	// 허수부
//};
//Complex operator+(const Complex& left, const Complex& right) {
//		int real = left.real + right.real;
//		int imag = left.imaginary + right.imaginary;
//		return Complex(real, imag);
//}
//int main() {
//	Complex c1(1, 1);
//	Complex c2(7, 2);
//	Complex c3(0, 0);
//	//c3 = c1 + c2;
//	c3 = operator+(c1, c2);
//	cout << c3.Real() << ", " << c3.Imaginary() << endl;
//
//	//Complex c1(1, 1);
//	//Complex prefix(0, 0);
//	//Complex postfix(0, 0);
//
//	//prefix = ++c1; // prefix = c1 = (2, 1)
//	//postfix = c1++;// postfix = (2, 1), c1 = (3, 1)
//
//	//cout << prefix.Real() << endl;
//	//cout << postfix.Real() << endl;
//	//cout << c1.Real() << endl;
//
//
//	//Complex c1(1, 1);
//	//Complex c2(7, 2);
//	//Complex c3(0, 0);
//	//c3 = c1.add(c2); 
//	//c3 = c1 + c2;
//	//cout << c3.Real() << ", " << c3.Imaginary() << endl;
//	return 0;
//}