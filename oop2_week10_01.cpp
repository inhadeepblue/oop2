//#include "docwriter.h"
//#include "htmlwriter.h"
//void main() {
//	// Down Casting
//	//HTMLWriter hw;
//	//DocWriter* pdw = &hw; // up cast
//	//HTMLWriter* phw = (HTMLWriter*)pdw; // down cast
//	//phw->Write();
//
//
//	// Up Casting
//
//	// Ok (부모 클래스 레퍼런스 사용 가능)
//	//HTMLWriter hw("test.html", "부모클래스 레퍼런스 이용");
//	//DocWriter& dw = hw;
//	//dw.Write();
//
//	// Ok (부모 클래스의 Write 동작)
//	//HTMLWriter hw("test.html", "부모클래스 포인터 이용");
//	//DocWriter* pdw = &hw;
//	//pdw->Write();
//
//
//	// Ok
//	//HTMLWriter hw;
//	//DocWriter* pdw = &hw;
//	//HTMLWriter hw;
//	//DocWriter& pdw = hw;
//
//	// Fail
//	//DocWriter dw;
//	//HTMLWriter& phw = dw;
//	//DocWriter dw;
//	//HTMLWriter* phw = &dw;
//
//	//HTMLWriter hw("test.html","객체간 대입");
//	//DocWriter dw;
//	////hw = dw;  // 자식 객체에 부모 객체 대입 불가
//	////dw = hw; // 부모 객체에 자식 객체 대입 가능
//	////dw.Write();
//	//hw.Write();
//}