#include "docwriter.h"
#include <fstream>
using namespace std;

DocWriter::DocWriter(){
	_fileName = "NoName.txt";
	_content = "냉무";
}
DocWriter::DocWriter(const string& fileName, const string& content){
	_fileName = fileName;
	_content = content;
}
DocWriter::~DocWriter(){
}
void DocWriter::SetFileName(const string& fileName){
	_fileName = fileName;
}
void DocWriter::SetContent(const string& content){
	_content = content;
}
void DocWriter::Write(){
	ofstream of(_fileName.c_str()); // 파일 open
	of << "# Content #\n\n"; // 헤더 쓰기
	of << _content;// 파일 쓰기
}