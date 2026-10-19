#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;
        PPA
        {
            cout<<"inside default constructer\n"


        }
        //Deafult constructor
        ~PPA()
        {
            cout<<"inside distructer\n"
        }

            
          ~PPA(int a,int b)
        {
            cout<<"inside parametrized distructer\n"
        }

};
int main()
{
    PPA pobj1;
    PPA pobj2;

   

    return 0;
}