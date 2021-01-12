//#include <iostream>
//using namespace std;
//class SmartPointer {
//public:
//	SmartPointer(char* p) : ptr(p) {
//	}
//	~SmartPointer() {
//		cout << "소멸자 동작 : 메모리 해제~\n";
//		delete[] ptr;
//	}
//	char* const ptr;
//};
//void B() {
//	throw "Exception!!";
//}
//void A() {
//	char* p = new char[100]; //동적 메모리 할당
//	SmartPointer sp(p);
//	cout << "예외가 발생하기 전\n";
//	B();
//	cout << "예외가 발생한 후\n";
//	//delete[] p;
//	//p = NULL;
//}
//void main(){
//	try{
//		A();
//	}catch (const char* ex){
//		cout << "예외 잡음 : " << ex << "\n";
//	}
//}