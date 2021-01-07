#pragma once
#include <string>
#include "docwriter.h"
class HTMLWriter : public DocWriter
{
public:
	HTMLWriter(void);
	HTMLWriter(const string& fileName, const string& content);
	~HTMLWriter(void);

	virtual void Write();// html 포맷으로 저장할 쓰기 메서드 (오버라이딩)
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	string	_fontName;
	int	 _fontSize;
	string	_fontColor;
};