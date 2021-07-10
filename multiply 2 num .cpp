//multiply 2 number
#include<iostream>
using namespace std;
class number
{
public:
    int a,b,sum;
    void display()
    {
        cin>>a>>b;
    }
    void display1()
    {
        sum=a+b;
        cout<<"sum="<<sum<<endl;
    }
};
class multiply:public number
{
public:
    int c,mul;
     void display2()
    {
        cin>>a>>b;
        cin>>c;
    }
    void display3()
    {
       mul=sum*c;
        sum=a+b;
        cout<<"multiply="<<mul<<endl;
        cout<<"sum="<<sum<<endl;
    }

};
int main()
{
    multiply obj;
obj.display2();
    obj.display3();
    return 0;

}
