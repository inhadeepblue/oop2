//#include <iostream>
//#include <memory>
//using namespace std;
//class Test {
//    int* data;
//public:
//    Test() {
//        cout << "생성자!" << endl;
//        data = new int[100];
//    }
//    ~Test() {
//        cout << "소멸자!" << endl;
//        delete[] data;
//    }
//    void t() { cout << "테스트 중..." << endl; }
//};
//void testing(){
//    //Test* t1 = new Test();
//    //Test* t2 = t1;
//    unique_ptr<Test> up1(new Test()); // C++11 (기존의 auto_ptr을 보완 대체)
//    // Test* up1 = new Test();
//
//    //unique_ptr<Test> up2 = up1;
//    //up1->t();
//}
//void main() { 
//    testing(); 
//}