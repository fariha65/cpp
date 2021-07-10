///default constructor & parametrized constructor
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
    student(int x,double y)//parametrized constructor
    {
        id=x;
        cgpa=y;
    }
    student()//default constructor
    {
        cout<<"Constructor Default"<<endl;
    }
};
int main()
{
    student obj;//called default constructor
    student Fariha(101,3.90),Liana(102,4.00),Emu(103,3.95);/*initializations variable*/
    Fariha.display();
    Liana.display();/*call void display function & print value*/
    Emu.display();
    return 0;

}
