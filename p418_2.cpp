#include <iostream>
using namespace std;

class Point
{
    private:
    int xpos, ypos, tpos;
    public:
    Point (int x=0, int y=0): xpos(x), ypos(y)
    { }
    void ShowPosition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
    friend Point& operator~(Point &ref, Point &temp);
};

Point& operator~(Point &ref, Point &temp)
{
    temp.tpos=ref.xpos;
    ref.xpos=ref.ypos;
    ref.ypos=temp.tpos;
    return ref;
}

int main(void)
{
    Point pos1(1,2);
    Point pos2=~pos1;
    pos2.ShowPosition();
    
    return 0;
}