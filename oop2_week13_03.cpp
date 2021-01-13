//#include <algorithm> // 정렬, 검색등과 같은 알고리즘을 구현해놓은 함수들
//#include <iostream>
//#include <list> // 링크드 리스트 (삽입, 삭제에 강점)
//#include <vector> // 동적 배열 (검색 위주에 강점)
//using namespace std;
//void main() {
//	vector<char> vec;
//	vec.push_back('e');
//	vec.push_back('b');
//	vec.push_back('a');
//	vec.push_back('d');
//	vec.push_back('c');
//
//	sort(vec.begin(), vec.end());
//
//	// Old
//	//vector<char>::iterator it;
//	//for (it = vec.begin(); it != vec.end(); it++)
//	//	cout << *it;
//
//	// Modern
//	//for (auto i = vec.begin(); i != vec.end(); i++)
//	//	cout << *i;
//
//	// Modern (c++11)
//	for (auto v : vec)
//		cout << v;
//
//
//	cout << endl;
//
//	char arr[5] = { 'e', 'b', 'a', 'd', 'c' };
//	sort(arr, arr + 5);
//	// Old
//	//for (char* p = arr; p != arr + 5; ++p)
//	//	cout << *p;
//	// Modern
//	for (auto p = arr; p != arr + 5; ++p)
//		cout << *p;
//
//
//
//}