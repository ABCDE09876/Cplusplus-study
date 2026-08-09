#include <iostream>
using namespace std;

class Point
{
    private:
    int xpos, ypos;
    public:
    Point (int x=0, int y=0): xpos(x), ypos(y)
    { }
    void ShowPosition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    } 
    friend ostream& operator<<(ostream&, const Point&);
    friend istream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

istream& operator<<(ostream& os11, const Point& pos11)
{
    os11<<'['<<pos11.xpos<<", "<<pos11.ypos<<']'<<endl;
    return os11;
}

int main(void)
{
    
    Point pos1;
    cout<<"x,y 좌표 순으로 입력: ";
    cin>>pos1;
    cout<<pos1;

    Point pos2;
    cout<<"x,y 좌표 순으로 입력: ";
    cin>>pos1;
    cout<<pos1;
    return 0;
}