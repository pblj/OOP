#pragma warning (disable:4326)
#include<iostream>
using namespace std;

class Point
{
	double x; 
	double y;

public:

	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this -> x = x;
	}
	void set_y(double y)
	{
		this -> y = y;
	}

	//constructors
	/*Point()
	{
		x = 0;
		y = 0;
		cout << "DefoltConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
	}*/
	Point(double x = 0,double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	//destructor
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//методы
	void Print()const
	{
		cout << "X = " << get_x() << "\tY = " << get_y() << endl;
	}
};

//#define STRUCT_POINT

void main()
{
	setlocale(LC_ALL, "");

#ifdef STRUCT_POINT

	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;

#endif // STRUCT_POINT

	Point A;
	/*A.set_x(2);
	A.set_y(3);*/
	//cout << A.get_x() << "\t" << A.get_y() << endl;
	A.Print();

	Point B =  4.1;
	B.Print();

	Point C(5, 6);
	C.Print();
}
