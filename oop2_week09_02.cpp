//#include "point.h"
//#include <iostream>
//using namespace std;
////typedef unsigned int* ui_ptr;
//typedef void (*FP1)(int);
//typedef void (Point::*FP2)(int); // 클래스의 멤버함수 참조용 함수포인터
//void Area(const Point& pt) {
//	int area = pt.GetX() * pt.GetY();
//	cout << "0, 0과 이 점이 이루는 사각형의 면적 = " << area << endl;
//}
//void main() {
//	Point pt(100, 100);
//	//FP1 fp1 = &Point::SetY;
//	FP2 fp2 = &Point::SetY; // Point클래스의 SetY 멤버함수의 주소를 전달
//	(pt.*fp2)(50);
//
//	//Area(pt);
//	//pt.Print();
//	//pt.SetX(-55);
//	pt.Print();
//}
//
////unsigned int a = 10000;
//////unsigned int* pui = &a;
////ui_ptr pui = &a;
////cout << *pui << endl;