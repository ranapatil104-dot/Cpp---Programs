#include<iostream>
using namespace std;

class PPA
{
    public:
       
        PPA(int a,int b)
        {
            cout<<"inside default constructer\n"


        }
        //Deafult constructor
        ~PPA(PPA &obj)
        {
            cout<<"inside distructer\n"
        }

        //parametrized constructor
          ~PPA()
        {
            cout<<"inside parametrized distructer\n"
        }

};
int main()
{
    PPA pobj1();        //default
    PPA pobj2(11,21);       //parametrized
    PPA pobj3(pobj1);       //copy

   

    return 0;
}