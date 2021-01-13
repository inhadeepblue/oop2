//#include <algorithm> // 정렬, 검색등과 같은 알고리즘을 구현해놓은 함수들
//#include <iostream>
//#include <list> // 링크드 리스트 (삽입, 삭제에 강점)
//#include <vector> // 동적 배열 (검색 위주에 강점)
//using namespace std;
//
//bool myfunc(int i, int j) { return i > j; }
//struct mystruct {
//	bool operator() (int i, int j) { return (i > j); }
//} myobj1;
//class myclass {
//public:
//	bool operator() (int i, int j) { return (i > j); }
//} myobj2;
//void main() {
//	vector<char> vec;
//	vec.push_back('e');
//	vec.push_back('b');
//	vec.push_back('a');
//	vec.push_back('d');
//	vec.push_back('c');
//
//	//sort(vec.begin(), vec.end()); // 오름차순
//	//sort(vec.begin(), vec.end(), myfunc); // 내림차순 (i > j), 함수이용
//	//sort(vec.begin(), vec.end(), myobj1); // 내림차순 (i > j), 구조체변수 이용
//	sort(vec.begin(), vec.end(), myobj2); // 내림차순 (i > j), 객체이용
//
//	// Modern (c++11)
//	for (auto v : vec)
//		cout << v;
//	cout << endl;
//}
