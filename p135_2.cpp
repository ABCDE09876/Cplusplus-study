#include <iostream>
using namespace std;

class Printer
{
    private:
    char sentence[100];
    public:
    void SetString(char* sen);
    void ShowString();
};

void Printer::SetString(char* sen)
{
    strcpy(sentence,sen);
}
void Printer::ShowString()
{
    cout<<sentence<<endl;
}

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}