/*#include<iostream>
 using namespace std;
 void cse(double &num);
 int main( )
 {
 double d= 7.0;
 cse(d);
  cout << d;
 return 0;


}


void cse(double &num)


{


 num = 3 * num;


}*/
/*#include<iostream>
 using namespace std;
 class sub{
 int a;
 public:


 sub( int m);
 void show( );
 sub operator+ (sub obj1 );
sub operator- (sub obj2 );
 };
 sub:: sub (int m) { a = m; cout<< ”In constructor1”<< “\n” ; }
 void sub: : show ( ) { cout<<a<< “\n” ; }
 int main( ){
 sub obj1,obj2,obj3;
 obj3= obj1+ obj2;
 obj3.show( );
 obj3= obj1- obj2;
 obj3.show( );
 return 0;
}*/
#include<iostream>
 using namespace std;
class sub
{
    int a;
    public:
    sub() { a=0;
    }
    sub(int m) {
        a=m;
        cout<< "In constructor" << endl;
    }
    void show();
    sub operator+(sub obj1);
     sub operator-(sub obj1);
};
sub sub::operator+(sub obj1)
{
    sub temp;
    temp.a = a+obj1.a;
    return temp;
}
sub sub::operator-(sub obj1)
{
    sub temp;
    temp.a = a-obj1.a;
    return temp;
}

void sub::show()
{
    cout<< a<< endl;
}
int main ()
{
    sub obj1(1), obj2(2), obj3;
    obj3 = obj1+obj2;
    obj3.show();
    return 0;
}

