#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    void display()
    {
        cout<<name<<endl;
        cout <<id<<endl;

    }
};
class person : public student
{
    public:
    int age;
     void display1()
    {
        cout <<age<<endl;
        cout<<name<<endl;
        cout <<id<<endl;

    }
};
int main()
{
    person obj;
    obj.name = "Fariha";
    obj.id=101;
    obj.age= 20;

   obj.display1();
    return 0;
}
