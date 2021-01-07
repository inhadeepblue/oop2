// 멤버 변수의 값을 변경하지 않는 메서드에서만 사용

// 다른 개발자에게 "이 함수의 멤버 변수의 값은 변경하지 않는다" 라는 메세지
// 실수로 멤버변수의 값을 바꾸려고 시도할 때, 컴파일러 단에서 오류 메세지
// Const 객체를 사용해서 이 함수를 호출 할 수 있다
//#include "point.h"
//#include <iostream>
//using namespace std;
//void Area(const Point& pt) {
//	int area = pt.GetX() * pt.GetY();
//	cout << "0, 0과 이 점이 이루는 사각형의 면적 = " << area << endl;
//}
//
//void main() {
//	Point pt(100, 100);
//	Area(pt);
//}
