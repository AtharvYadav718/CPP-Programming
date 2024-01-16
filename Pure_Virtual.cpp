#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void Fun()  //Concrete method   1000
        {
            cout<<"Base Fun\n";
        }
        virtual void Gun()  //Concrete method   2000
        {
            cout<<"Base Gun\n";
        }
        virtual int Addition(int no1, int no2) = 0;    //Abstract method
};
class Derived : public Base
{
    public:  
        int a,b;
        
        void Gun()  //Concrete method   3000
        {
            cout<<"Derived Gun\n";
        }
        virtual void Sun()  //Concrete method   4000
        {
            cout<<"Derived Sun\n";
        }
        int Addition(int no1, int no2) //Concrete method    5000
        {
            return no1 + no2;
        }
};

int main()
{   
    Base bobj;

    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is :"<<Ret<<"\n";


    return 0;
}
