#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()  //Defination
        {
            cout<<"Inside Base fun\n";
        }
        void Gun()  //Defination
        {
            cout<<"Inside Base Gun\n";
        }
        void Sun()  //Defination
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()  //Defination
        {
            cout<<"Inside Base Run\n";
        }
};

class Deriverd : public Base
{
    public:
        int a,b;
        void Gun()  //Redefination
        {
            cout<<"Inside derived Gun\n";
        }
        void Run () //Redefination
        {
            cout<<"Inside derived Run\n";
        }
};

int main()
{   
   
   Base *bp = new Deriverd; 
   bp->Fun();
   bp->Gun();
   bp->Sun();
   bp->Run();
 
    return 0;
}