///adding parametrized function to the class

#include<iostream>
using namespace std;
 class student
 {
 public:
    int id;
    double cgpa;
    void display()
    {
        cout<< id<<" "<<cgpa<<endl;
    }
    void setValue( int x,double y )
    {
        id=x;
        cgpa=y;
    }
 };

int main()
{
    student Fariha,Liana,Emu;
    Fariha.setValue( 101 , 3.90 );
    Liana.setValue(102 ,4.00);
    Emu.setValue(103,3.95);
    Fariha.display();
    Liana.display();
    Emu.display();

  return 0;

}
