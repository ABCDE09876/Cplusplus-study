#include <iostream>
using namespace std;

int main(void)
{
    const int num=12;
    const int *ptr=&num;
    const int &val=*ptr;

    cout<<*ptr<<endl;
    cout<<val<<endl;
    return 0;
}