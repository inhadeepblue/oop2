#pragma once
class Point {
public:
	typedef int COOR_T;

	void Print() const;

	Point();
	Point(COOR_T _x, COOR_T _y);
	Point(const Point& pt);

	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const { return x; };
	COOR_T GetY() const { return y; };

private:
	COOR_T x, y;
};
inline void Point::SetX(COOR_T value) {
	if (value < 0)
		x = 0;
	else if (value > 100)
		x = 100;
	else
		x = value;
}
inline void Point::SetY(COOR_T value) {
	if (value < 0)
		y = 0;
	else if (value > 100)
		y = 100;
	else
		y = value;
}