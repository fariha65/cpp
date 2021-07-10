/*Create a generic base class called building that stores the number of floors a
building has, the number of rooms, and its total square footage. Create a
derived class called house that inherits building and also stores the number of
bedrooms and the number of bathrooms. Next create a derived class called
office that inherits building and also stores the number of fire extinguishers
and the number of telephones. */

#include<iostream>
using namespace std;
class building
{
protected:
    int floors_num;
    int rooms_num;
    double square_footage;
};
class house:public building
{
    int bedrooms_num;
    int bathrooms_num;
public:
    house(int x,int y,double z,int a,int b)
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
class office:public building
{
    int telephones_num;
    int fire_extinguishers;
public:
    office(int x, int y,double z, int p,int t)
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
    house ob1(5,15,5000,8,2);
    office ob2(2,50,10000,20,10);
    ob1.display();
    ob2.display();
    return 0;
}
