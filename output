#include<iostream>
using namespace std;
class base{
    int a;
public:
    base(int x){cout<<"In base constructor"<<endl;a=x;}
    ~base(){cout<<"In  base constructor"<<endl;}
     virtual void show(){cout<<a<<endl;}
    };
    class derived{
    int b;
public:
    derived(int x){cout<<"In derived2 constructor"<<endl;b=x;}
    ~derived(){cout<<"In  derived destructor"<<endl;}
      void show(){cout<<b<<endl;}
    };
    class derived2:public base,public derived{
    int c;
public:
    derived2(int x,int y,int z):base(x),derived(y){
        cout<<"In derived2 constructor"<<endl;c=z;}
    ~derived2(){cout<<"In  derived destructor"<<endl;}
      void show(){cout<<c<<endl;}
    };
    int main(){
    int i=0  ;
    base *p;
    for(i=0;i<3;i++)
    derived2 obj(i+1,i+3,i+5);
    p=&obj;
    p->show;
    }
    return 0;
    }
