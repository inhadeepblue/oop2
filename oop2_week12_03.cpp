//#include <iostream>
//using namespace std;
///*
//const_cast : const, volatile 등의 속성을 변경
//dynamic_cast : 상속 관계의 클래스 포인터 및 레퍼런스 타입 체크
//static_cast : 논리적으로 변환 가능한 타입만 변환. 그 외의 변환은 에러로 처리.
//reinterpret_cast : 포인터끼리, 포인터와 수치형 간의 변환
//*/
//class A {
//public:
//	virtual void Func() { }
//};
//class B : public A { };
//class C : public B { };
//int main() {
//	A* pa1 = new C;
//	A* pa2 = new A;
//	C* pc1 = dynamic_cast<C*>(pa1);
//	C* pc2 = dynamic_cast<C*>(pa2); // 캐스팅 실패, NULL 리턴
//	try {
//		C& rc1 = dynamic_cast<C&>(*pa2); // 캐스팅 실패, bad_cast 예외 발생
//	}
//	catch (bad_cast & e) {
//		cout << "bad_cast~~" << endl; 
//	}
//	return 0;
//}
//
//
////void main() {
////	char univ[] = "Inha";
////	const char* c1 = univ;
////	char* c2;
////	float f;
////	c2 = const_cast<char*>(c1);
////	//int* pi = const_cast<int*>(c1);
////	//f = const_cast<float>(c1);
////	c2[0] = 'i';
////	cout << c2 << endl;
////}