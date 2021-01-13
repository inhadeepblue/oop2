//#include <iostream>
//using namespace std;
//template<typename T>
//T max(T a, T b) {
//	return (a > b) ? a : b;
//}
//void main() {
//	int i1 = 7, i2 = 4;
//	int i3 = max(i1, i2);
//	cout << i3 << endl;
//
//	double d1 = 3.14, d2 = 2.71;
//	double d3 = max(d1, d2);
//	cout << d3 << endl;
//}
//
//
////template <typename T>
////class AutoArray {
////public:
////	AutoArray(T* ptr) {
////		_ptr = ptr;
////	}
////	~AutoArray() {
////		delete[] _ptr;
////	}
////	T& operator[] (int index) {
////		return _ptr[index];
////	}
////private:
////	T* _ptr;
////};
////int main() {
////	AutoArray<int> arri(new int[100]);
////	arri[0] = 100;
////	AutoArray<float> arrf(new float[100]);
////	arrf[99] = 2.71f;
////	AutoArray<short> arrs(new short[10]);
////	arri[7] = 11;
////
////	return 0;
////}