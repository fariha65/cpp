#include<iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout<<"FARIHA"<<" ";

    }
};
class student : public person
{
public:

    void display()
    {
        cout<<"AFRIN"<<" ";
    }


};
class teacher: public person
{
public:
    void display()
    {
       cout<<"TAMANNA";
    }
};
int main()
{
    person p;
    student s;
    teacher t;
    p.display();
    s.display();
    t.display();
    return 0;
}
