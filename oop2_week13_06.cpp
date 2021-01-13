#include <iostream>
using namespace std;
/*
	extern ostream cout;
	extern istream cin;
	typedef basic_ostream<char> ostream;
	typedef basic_istream<char> istream;


	ios_base 

	basic_ios // 부모클래스

	basic_ostream // cout 객체의 타입
	basic_istream // cin 객체의 타입
*/
void main() {
	// width(), precision() 등등 출력형식 지정함수

	//bool test = true;
	////cout << boolalpha;
	//cout << test << endl;
	//cout.setf(ios_base::boolalpha);
	//cout << test << endl;
	//cout.unsetf(ios_base::boolalpha);
	//cout << test << endl;


	//int a = 11;
	//cout << hex;
	//cout.setf(ios_base::hex, ios_base::basefield);
	//cout.width(5);
	//cout << a << endl;

	//float f = 0.01234f;
	//ios_base::fmtflags old; // 입출력 포맷과 관련된 기능을 제공하는 클래스
	//cout << f << endl;
	//old = cout.setf(ios_base::scientific, ios_base::floatfield);
	//cout << f << endl;
	//cout.setf(old, ios_base::floatfield);
	//cout << f << endl;

	float f = 0.01234f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << f << endl;
}