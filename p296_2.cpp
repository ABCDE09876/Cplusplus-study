#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
    private:
    char * name;
    int age;
    public:
    MyFriendInfo(char * myname, int myage)
    {
        name=new char[strlen(myname)+1];
        strcpy(name, myname);
        age=myage;
    }
    ~MyFriendInfo()
    {
        delete []name;
    }
    void ShowMyFriendInfo()
    {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
    private:
    char * addr;
    char * phone;
    public:
    MyFriendDetailInfo(char * myname, int myage, char * myaddr, char * myphone)
    : MyFriendInfo(myname, myage)
    {
        addr=new char[strlen(myaddr)+1];
        strcpy(addr, myaddr);
        phone=new char[strlen(myphone)+1];
        strcpy(phone, myphone);
    }
    ~MyFriendDetailInfo()
    {
        delete []addr;
        delete []phone;
    }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        cout<<"주소: "<<addr<<endl;
        cout<<"전화: "<<phone<<endl<<endl;
    }
};

int main(void)
{
    MyFriendInfo mfi1("jinsunwoo", 23);
    mfi1.ShowMyFriendInfo();

    cout << endl;

    // [수정 후] 이름, 나이, 주소, 전화번호 4개 인자 전달
    MyFriendDetailInfo mfdi1("jinsunwoo", 23, "abcdef", "samsung");
    mfdi1.ShowMyFriendDetailInfo();

    return 0;
}

////도움 받음/////