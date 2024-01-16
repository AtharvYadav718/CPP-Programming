#include<iostream>
using namespace std;

float Calaculate(float Marks, float Outof = 100)
{
    float Percentage = (Marks / Outof) * 100;

    return Percentage;
}

int main()
{
    float Ans = 0.0f;

    Ans = Calaculate(86,100);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calaculate(86);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calaculate(320,400);
    cout<<"percentage : "<<Ans<<"\n";

    return 0;
}