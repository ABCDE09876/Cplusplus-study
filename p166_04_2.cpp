#include <iostream>
using namespace std;

class Point
{
    private:
    int xpos, ypos;
    public:
    void Init(int x, int y)
    {
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{   
    Point point;
    int radius;
    public:
    void Init(int x, int y, int r)
    {
        point.Init(x, y);  // Point의 public 함수로 좌표 설정
        radius = r;
    }
};

class Ring
{
    private:
    
    public:
    void Init(int a, int b, int c, int d, int e, int f)
    {
        
    }

};

int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}