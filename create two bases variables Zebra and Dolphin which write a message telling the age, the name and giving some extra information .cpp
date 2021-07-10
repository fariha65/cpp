/*Write a problem with a mother class animal.
Inside it define a name and an age variables, and set_value() function.
Then create two bases variables Zebra and Dolphin which write a message
telling the age,the name and giving some extra information (e.g. place of origin).*/
#include<iostream>
using namespace std;
class Animale
{
public:
    int age;
    string name , extra_info;
     set_value(int a , string n , string  x)
    {
        age=a;
        name=n;
        extra_info=x;

    }
    set_value()
    {
     cout<<"Name:"<<name<<" "<<"Age:"<<age<<" "<<extra_info<<endl;
    }
};
int main()
{
    Animale zebra,dolphin;
    zebra.name ="Zebra";
    zebra.age = 2;
    zebra.extra_info="years old. The zebra comes from Africa.";
    dolphin.name="Dolphin";
    dolphin.age=3;
    dolphin.extra_info="years old. The dolphin comes from New Zeland.";
    zebra.set_value();
    dolphin.set_value();

    return 0;
}
