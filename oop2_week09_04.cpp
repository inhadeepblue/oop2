#include "docwriter.h"
#include "htmlwriter.h"

void main() {
	HTMLWriter hw("gta.html", "트레버 필립스"); // 부모 클래스의 생성자 활용
	hw.Write(); // 자식 클래스의 오버라이딩 된 html 쓰기 메서드

	//DocWriter dw;
	//dw.Write();

	//DocWriter dw;
	//dw.SetFileName("exam.txt");
	//dw.SetContent("시험 잘봄!");
	//dw.Write();

	//DocWriter dw("assignment.txt","과제 많다~~");
	//dw.Write();
}