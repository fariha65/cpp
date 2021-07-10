/*write a program in c++ that will implement class Employees as parent with
data members Employee id, Name,Designation and salary,and use the following
 instructions:
i) Take a derived class named "Teacher"which will inherit Employees class .
 Add a new function for Teacher class and show the output of the new function
  alongside with Employee Id, Name,Designation and Salary.
ii) Take a derived class named "Staff" which will inherit Employee class.
Add a new function for staff class and show the output of the new function
alongside with Employee Id,Name,Designation and salary. */
#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
public:
    int Id;
   string Name;
   string Designation;
    float salary;
};
//(i)
class Teacher : public Employee
{
public:
    int Teacher_Id;
    string Teacher_Name;
   string  Teacher_Designation;
    float Teacher_salary;
    Teacher(int x,string y,string z,float p,int i,string n,string d,float s)
    {
        Teacher_Id=x;
      Teacher_Name=y;
     Teacher_Designation=z;
        Teacher_salary=p;
        Id=i;
       Name=n;
        Designation=d;
        salary=s;

    }
    void display()
    {
        cout<<"Teacher Id:"<<Teacher_Id<<endl;
        cout<<"Teacher Name:"<<Teacher_Name<<endl;
        cout<<"Teacher Designation:"<< Teacher_Designation<<endl;
        cout<<"Teacher salary:"<<Teacher_salary<<endl;
        cout<<"Employee Id:"<<Id<<endl;
        cout<<"Employee Name:"<<Name<<endl;
        cout<<"Employee Designation:"<<Designation<<endl;
        cout<<"Employee salary:"<<salary<<endl;
    }
};
//(ii)
class Staff : public Employee
{
public:
    int Staff_Id;
   string Staff_Name;
    string Staff_Designation;
    float Staff_salary;
   Staff(int a,string b,string c,float e,int i,string n,string d,float s)
    {
        Staff_Id=a;
       Staff_Name=b;
        Staff_Designation=c;
        Staff_salary=e;
        Id=i;
        Name=n;
        Designation=d;
        salary=s;

    }
    void display()
    {
        cout<<"Staff Id:"<<Staff_Id<<endl;
        cout<<"Staff Name:"<<Staff_Name<<endl;
        cout<<"Staff Designation:"<< Staff_Designation<<endl;
        cout<<"Staff salary:"<<Staff_salary<<endl;
        cout<<"Employee Id:"<<Id<<endl;
        cout<<"Employee Name:"<<Name<<endl;
        cout<<"Employee Designation:"<<Designation<<endl;
        cout<<"Employee salary:"<<salary<<endl;
    }

};
int main()
{
    Teacher ob1(101,"Saria Tasnim","assistant proffesor",40000.00,102,"fariha","student",5000);
    Staff ob2(10,"xyz","dsgh df",10000.00,122 ,"fdfd hg","trrtere",2000.00);
    cout<<"Teacher:"<<endl;
    ob1.display();
    cout<<"Staff:"<<endl;
    ob2.display();
    return 0;
}


