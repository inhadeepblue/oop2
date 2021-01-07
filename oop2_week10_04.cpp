//#include <iostream>
//using namespace std;
//
//class DynamicArray {
//public:
//	DynamicArray(int arraySize);
//	~DynamicArray();
//
//	//void SetAt(int index, int value);
//	bool SetAt(int index, int value);
//	int GetAt(int index) const;
//	int GetSize() const;
//
//protected:
//	int* arr;
//	int size;
//};
//DynamicArray::DynamicArray(int arraySize) {
//	arr = new int[arraySize];
//	size = arraySize;
//}
//DynamicArray::~DynamicArray() {
//	delete[] arr;
//	arr = 0;
//}
////void DynamicArray::SetAt(int index, int value) {
////	arr[index] = value;
////}
//bool DynamicArray::SetAt(int index, int value) {
//	if (index < 0 || index > GetSize())
//		return false;
//	arr[index] = value;
//	return true;
//}
//int DynamicArray::GetAt(int index) const {
//	return arr[index];
//}
//int DynamicArray::GetSize() const {
//	return size;
//}
//int main() {
//	DynamicArray arr(10);
//	bool b;
//	b = arr.SetAt(7, 8);
//	if (!b)
//		cout << "7번 인덱스 오류 발생!" << endl;
//	b = arr.SetAt(3, -99);
//	if (!b)
//		cout << "3번 인덱스 오류 발생!" << endl;
//	b = arr.SetAt(20, 0);
//	if (!b)
//		cout << "20번 인덱스 오류 발생!" << endl;
//
//	//DynamicArray arr(10);
//
//	//for (auto i = 0; i < 11; ++i)
//	//	arr.SetAt(i, (i + 1) * 10);
//
//	//cout << "Size of arr = " << arr.GetSize() << "\n";
//
//	//for (auto i = 9; i >= 0; --i)
//	//	cout << "arr[" << i << "] = " << arr.GetAt(i) << "\n";
//
//	return 0;
//}