//#include <iostream>
//using namespace std;
//void C() {
//	//throw 123;
//	//throw "Hell";
//	throw 2.71f;
//}
//void B() {
//	C();
//}
//void A() {
//	try {
//		B();
//	}
//	catch (int ex) {
//		cout << "예외(A함수/정수처리) = " << ex << "\n";
//		throw; // 예외 다시 던지기
//	}
//}
//int main() {
//	try {
//		A();
//	}catch (int ex) {
//		cout << "예외(Main함수/정수처리) = " << ex << "\n";
//	}catch (const char* ex) {
//		cout << "예외(Main함수/문자열처리) = " << ex << "\n";
//	}catch (...) {
//		cout << "기타 예외\n";
//	}
//	return 0;
//}
//
