/*Write a program with a mother class and an inherited daugther class.
Both of them should have a method void display ()
that prints a message (different for mother and daugther).
In the main define a daughter and call the display() method on it.*/
#include<iostream>
using namespace std;
class Mother
{
public:
    void display()
    {
        cout<<"hello"<<endl;
    }
};
class Daugther:public Mother
{
public:
    void display()
    {
        cout<<"hi"<<endl;
    }
};
int main()
{

    Daugther girl;

    girl.display();
    return 0;
}
/*#include <iostream>
using namespace std;

class mother{
public:
	void display ()
	{
		cout << "mother: display function\n";
	}
};

class daughter : public mother{
public:
	void display ()
	{
		cout << "daughter: display function\n\n";
	}
};

int main ()
{
	daughter rita;
	rita.display();
	return 0;
}*/
