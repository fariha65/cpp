//constructor initializer
#include<iostream>
using namespace std;
class Midterm
{
    public:
        const int semesterfee;
        Midterm(int x)
        :semesterfee(x)
        {
            cout<<semesterfee<<endl;
        }

};
int main()
{
    Midterm obj(20000);
   return 0;
}
