//#include <iostream>
//#include "myexception.h"
//using namespace std;
//
//class DynamicArray {
//public:
//	DynamicArray(int arraySize);
//	~DynamicArray();
//
//	void SetAt(int index, int value);
//	int GetAt(int index) const;
//	int GetSize() const;
//
//protected:
//	int* arr;
//	int size;
//};
//DynamicArray::DynamicArray(int arraySize) {
//	try{
//		arr = new int[arraySize];
//		size = arraySize;
//
//		throw MyException(this, "Constructor Inside Exception", 100);
//	}
//	catch (...) {
//		cout << "생성자 안쪽 캐치 구문!!!" << endl;
//		delete[] arr; // 메모리 해제
//
//		throw; // 받은 예외를 다시 던짐
//	}
//}
//DynamicArray::~DynamicArray() {
//	try {
//		cout << "소멸자 동작!" << endl;
//		delete[] arr;
//		arr = 0;
//	}
//	catch (...) {
//	}
//}
//void DynamicArray::SetAt(int index, int value) {
//	if (index < 0 || index > GetSize())
//		throw MyException(this, "Out of Range!!", index);
//	arr[index] = value;
//}
//int DynamicArray::GetAt(int index) const {
//	return arr[index];
//}
//int DynamicArray::GetSize() const {
//	return size;
//}
//void UseArray(DynamicArray& a, DynamicArray& b) {
//	try {
//		a.SetAt(3, 29);
//		b.SetAt(3, 29);
//
//		a.SetAt(9, -17);
//		b.SetAt(9, -17);
//
//		a.SetAt(20, 7); // 예외발생
//		b.SetAt(20, 7); // 예외발생
//	}
//	catch (MyException& e) {
//		cout << &a << ", " << &b << endl;
//
//		cout << e.sender << endl;
//		cout << e.description << endl;
//		cout << e.info << endl;
//	}
//	catch (const char* e) {
//		cout << "예외 : " << e << endl;
//	}
//}
//int main() {
//	try {
//		DynamicArray arr1(100);
//		//DynamicArray arr2(10);
//		//UseArray(arr1, arr2);
//	}catch (MyException & e){
//		cout << e.description << endl;
//	}
//	return 0;
//}