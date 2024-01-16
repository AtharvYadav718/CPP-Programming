#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside Constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
        void Display()
        {
            cout<<"Inside display\n"; 
        }
};

int main()
{
   
    Demo *ptr = new Demo;
   
    ptr->Display();

    delete ptr;

    return 0;
}