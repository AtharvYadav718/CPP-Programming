#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Deriverd : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside derived Gun";
        }
};

int main()
{   
   Base *bp1 = new Base; //No Caasting
   Deriverd *dp1 = new Deriverd; //No Casting
   Base *bp2 = new Deriverd; //Up casting
   //Derived *dp2 = new Base; //Down Casting
   
    return 0;
}