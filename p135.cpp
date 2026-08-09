#include <iostream>
using namespace std;

class Calculator
{
    private:
    double a;
    double b;
    int c=0,d=0,e=0,f=0;
    public:
    double Add(double a, double b);
    double Div(double a, double b);
    double Min(double a, double b);
    int ShowOpCount();
    
};

double Calculator::Add(double a, double b)
{
    c++;
    return a+b;
}
double Calculator::Div(double a, double b)
{
    d++;
    return a/b;
}
double Calculator::Min(double a, double b)
{
    e++;
    return a-b;
}
int Calculator::ShowOpCount()
{
    cout<<c<<d<<e<<endl;
    return 0;
}

int main(void)
{
    Calculator cal;
    cout<<"3.2+2.4="<<cal.Add(3.2,2.4)<<endl;
    cout<<"3.5/1.7="<<cal.Div(3.5,1.7)<<endl;
    cout<<"2.2-1.5="<<cal.Min(2.2,1.5)<<endl;
    cout<<"4.9/1.2="<<cal.Div(4.9,1.2)<<endl;
    cal.ShowOpCount();
    return 0;
}
