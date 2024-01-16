#include<iostream>
using namespace std;

class Hello
{
    public:
        void Fun();
        void Gun();
};

class Demo
{   
    public: int i;
    private: int j;
    protected: int k;
    public:
    Demo()
    {
        i = 10; j = 20; k = 30;
    }
    friend class Hello;
};

//Return_value Class_Name :: Function Name()
void Hello :: Fun()
{   
    Demo obj;
    cout<<"Value of i :"<<obj.i<<"\n";
    cout<<"Value of j :"<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";
}
void Hello :: Gun()
{   
    Demo obj;
    cout<<"Value of i :"<<obj.i<<"\n";
    cout<<"Value of j :"<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";
}

int main()
{
    Hello hobj;
    hobj.Fun();
    hobj.Gun();

    return 0;
}