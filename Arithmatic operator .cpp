#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
    int num1,num2,num3,sum,sub,aver;
    cout<<"Enter three integer number ";

    cin>>num1>>num2>>num3;
    sum = num1+num2+num3;
    sub = num1-num2-num3;
    aver=sum/3;
    cout<<"sum="<<sum <<endl<<"sub = "<< sub<<endl<<"average="<<aver<<endl;
    getch ();

}
