/*Create a generic base class called Apartments that stores the number of floors a
building has, the number of rooms, and its total square footage. Create a derived
class called Flat that inherits Apartments and also stores the number of
bedrooms and the number of bathrooms. Next, create a derived class called
Office-floor that inherits Apartments and also stores the number of fire
extinguishers and the number of telephones. */
#include<iostream>
using namespace std;
class Apartments
{
protected:
    int floors_num;
    int rooms_num;
    double square_footage;
};
class Flat:public Apartments
{
    int bedrooms_num;
    int bathrooms_num;
public:
    Flat(int x,int y,double z,int a,int b)
    {
        floors_num=x;
        rooms_num=y;
        square_footage=z;
        bedrooms_num=a;
        bathrooms_num =b;
    }
    void display()
    {
        cout<<"floors number:"<<floors_num<<endl;
        cout<<"rooms number:"<<rooms_num<<endl;
        cout<<"Total square footage:"<<square_footage<<endl;
        cout<<"bedrooms number:"<<bedrooms_num<<endl;
        cout<<"bathrooms number:"<<bathrooms_num<<endl;
    }
};
class Office_floor:public Apartments
{
    int telephones_num;
    int fire_extinguishers;
public:
    Office_floor(int x, int y,double z, int p,int t)
    {
        floors_num=x;
        rooms_num=y;
        square_footage=z;
        telephones_num = p;
        fire_extinguishers=t;
    }
    void display()
    {
        cout<<"floors number:"<<floors_num<<endl;
        cout<<"rooms number:"<<rooms_num<<endl;
        cout<<"square footage:"<<square_footage<<endl;
        cout<<"Telephone number:"<<telephones_num<<endl;
        cout<<"fire extinguishers:"<<fire_extinguishers<<endl;
    }
};
int main()
{
    Flat ob1(4,13,8000,8,2);
   Office_floor ob2(3,50,15000,20,10);
   cout<<"Flat:"<<endl;
    ob1.display();
    cout<<"Office_floor:"<<endl;
    ob2.display();
    return 0;
}
