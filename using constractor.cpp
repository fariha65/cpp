/// using constractor
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout<<id<<" "<<cgpa<<endl;
    }
    /*Constractor has the same name as that of the class it belongs &it is a
    special type of function*/
    student(int x,double y)//constractor...it has no return type not even void
    {
        id=x;
        cgpa=y;
    }

};
int main()
{
    student Fariha(101,3.90),Liana(102,4.00),Emu(103,3.95);
    Fariha.display();
    Liana.display();
    Emu.display();
    return 0;

}
