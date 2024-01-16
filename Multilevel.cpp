#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo Constructor\n";
            x = 10;
            y = 20;
        }
        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo\n"; 
        }
};

//class Hello extends Demo
class Hello : public Demo
{
    public:
        int a,b,c;
        Hello()
        {
            cout<<"Inside Hello Constructor\n";
            a = 30;
            b = 40;
            c = 50;
        }
        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Hello\n"; 
        }
};  

//class Marvellous extends Hello
class Marvellous : public Hello
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside constructor marvellous\n";
            p = 60;
        }
         ~Marvellous()
        {
            cout<<"Inside Destructor marvellous\n";
            p = 60;
        }
        void Sun()
        {
            cout<<"Inside Sun of Marvellous\n"; 
        }
};

int main()
{
    Marvellous mobj;

    cout<<sizeof(mobj)<<" bytes \n"; //20

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";

    mobj.fun();
    mobj.Gun();
    mobj.Sun();

    return 0;
}