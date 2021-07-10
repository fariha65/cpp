///class & object(variable,function)
#include<iostream>
using namespace std;

class student
{
public:
    int id;     /*declaire variable*/
    double cgpa;
    void display() //declaire function
    {

    cout<<id<<" "<<cgpa<<endl;
    }
};

int main()
{
    student Fariha,Liana,Emu;//object
    Fariha.id = 101;
    Fariha.cgpa = 3.90;/*initializations variable*/
    Liana.id =102;
    Liana.cgpa =4.00;
    Emu.id= 103;
    Emu.cgpa = 3.95;
    Fariha.display();
   Liana.display();
    Emu.display();//print value
    return 0;
}
