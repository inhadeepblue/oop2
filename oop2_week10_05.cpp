#include <iostream>
using namespace std;

class DynamicArray {
public:
	DynamicArray(int arraySize);
	~DynamicArray();

	void SetAt(int index, int value);
	//bool SetAt(int index, int value);
	int GetAt(int index) const;
	int GetSize() const;

protected:
	int* arr;
	int size;
};
DynamicArray::DynamicArray(int arraySize) {
	arr = new int[arraySize];
	size = arraySize;
}
DynamicArray::~DynamicArray() {
	delete[] arr;
	arr = 0;
}
//void DynamicArray::SetAt(int index, int value) {
//	arr[index] = value;
//}
void DynamicArray::SetAt(int index, int value) {
	if (index < 0 || index > GetSize())
		throw "Out of Range!!";
	arr[index] = value;
}
int DynamicArray::GetAt(int index) const {
	return arr[index];
}
int DynamicArray::GetSize() const {
	return size;
}
void UseArray(DynamicArray& a) {
	try {
		a.SetAt(3, 29);
		a.SetAt(9, -17);
		a.SetAt(20, 7); // 예외발생
	}
	catch (const char* e) {
		cout << "예외 : " << e << endl;
	}
}
int main() {
	DynamicArray arr(10);
	UseArray(arr);
	return 0;
}