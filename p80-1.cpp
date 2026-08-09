#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    ref1=ref1+1;
    ref2=ref2+1;
}

void SwapByRef4(int &ref3, int &ref4)
{
    ref3=ref3*(-1);
    ref4=ref4*(-1);
}

int main(void)
{
    int a=10, b=10, c=10, d=10;
    SwapByRef2(a,b);
    SwapByRef4(c,d);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}