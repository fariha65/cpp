#include<iostream>
#include<conio.h>
#include<iomanip>// declare header file for set precision objectives.
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    cout<<showpoint;//this is a objectives.it shows floating values point
    cout<<fixed;//this is a objectives . it count point after values
    cout<<setprecision(2);//this is a objectives. it counts&shows number of value with point
    float sum = num1+num2;
    cout<<setw(20)<<"sum is "<<sum;
    cout<<endl;
    cout<<noshowpoint;
    float sub=num1-num2;
    cout<<setw(20)<<"subtraction is:"<<sub;
    cout<< endl;
    float mul=num1*num2;
    cout<<setw(20)<<"Multiplication is:"<<mul;
    cout<<endl;
    double div=(float) num1/num2;
    cout<<setw(20)<<"Division is:"<<div;
    cout<<endl;
    getch();
}
