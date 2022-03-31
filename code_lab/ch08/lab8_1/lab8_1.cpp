#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(){ a = 0; }
	A(int aa)
	{ a = aa;
	  cout << a++;
	}
};

void main()
{
  A x,y (2),z (3);
  cout << endl;
}


class Point
{
	int _x, _y;
public:
	Point(int x=0, int y=0) : _x(x), _y(y) {}
	Point& operator++();
	Point operator++(int);
	Point& operator--();
	Point operator--(int);
	friend ostream& operator << (ostream& o, Point& p);
};

Point& Point::operator++()
{
	_x++;
	_y++;
	return *this;
}

Point Point::operator++(int)
{
	Point temp = *this;
	++*this;
	return temp;
}

Point& Point::operator--()
{
	_x--;
	_y--;
	return *this;
}

Point Point::operator--(int)
{
	Point temp = *this;
	--*this;
	return temp;
}

ostream& operator << (ostream& o, Point& p) {
	o << '(' << p._x << ", " << p._y << ')';
	return o;
}

int main1()
{
	Point p(1, 2);
	cout << p << endl;
	cout << p++ << endl;
	cout << ++p << endl;
	cout << p-- << endl;
	cout << --p << endl;
	return 0;
}






class A
{
	int a;
public:
	A() { a = 0; }
	A(int aa)
	{
		a = aa;
		cout << a++;
	}
};

void main()
{
	A x, y(2), z(3);
	cout << endl;
}