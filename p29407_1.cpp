#include <iostream>
#include <cstring>
using namespace std;

class Car
{
    private:
    int gasolineGauge;
    public:
    Car(): gasolineGauge(100)
    { }
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car
{
    private:
    int electricGauge;
    public:
    HybridCar(): electricGauge(200)
    { }
    int GetElecGauge()
    {
        return electricGauge;
    }
};

class HybridWaterCar: public HybridCar
{
    private:
    int waterGauge;
    public:
    HybridWaterCar(): waterGauge(300){ }
    void ShowCurrentGauge()
    {
        cout<<"잔여 가솔린: "<<GetGasGauge()<<endl;
        cout<<"잔여 전기량: "<<GetElecGauge()<<endl;
        cout<<"잔여 워터량: "<<waterGauge<<endl;
    }
};

int main(void)
{
    HybridWaterCar hwc;
    hwc.ShowCurrentGauge();
    return 0;
}

////도움받음//////
