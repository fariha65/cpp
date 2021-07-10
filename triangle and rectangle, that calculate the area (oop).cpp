/*Exercises 1
Write a program that defines a shape class with a constructor that gives value
to width and height. The define two sub-classes triangle
and rectangle, that calculate the area of the shape area ().
In the main, define two variables a triangle and a rectangle
and then call the area() function in this two variables.*/

#include <iostream>


using namespace std;

class Shape
{
protected:
	double width, height;
public:
	void set_data (double a, double  b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Shape
{
public:
	double area ()
	{
		return (width * height);

	}
};

class Triangle: public Shape
{
public:
	double area ()
	{
		return (width * height / 2);

	}
};

int main (){

	Rectangle rect;
	Triangle tri;
	rect.set_data (5,3);
	tri.set_data (2,5);

	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}

