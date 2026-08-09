#include <iostream>
using namespace std;

class FruitSeller
{
    private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

    public:
    bool InitMembers(int price, int num, int money)
    {
        if(price<0||num<0||money<0)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }
        
        APPLE_PRICE=price;
        numOfApples=num;
        myMoney=money;
        return true;
    }
    int SaleApples(int money) 
    {
        if(money<0)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return -1;
        }
        
        int num=money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }
    void ShowSalesResult() const
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"판매 수익: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

    public:
    bool InitMembers(int money)
    {
        if(money<0)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }
        
        myMoney=money;
        numOfApples=0;
        return true;
    }
    bool BuyApples(FruitSeller &seller, int money) 
    {
        if(money<0)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }
        
        int num=seller.SaleApples(money);   // 딱 한 번만 호출
        if(num<0)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }
        
        numOfApples+=num;
        myMoney-=money;
        return true;
    }
    void ShowBuyResult() const
    {
        cout<<"현재 잔액: "<<myMoney<<endl;
        cout<<"사과 개수: "<<numOfApples<<endl<<endl;
    }
};

int main(void)
{
    FruitSeller seller;
    if(!seller.InitMembers(1000,20,0))
        cout<<"실패"<<endl;
    FruitBuyer buyer;
    if(!buyer.InitMembers(5000))
        cout<<"실패"<<endl;
    if(!buyer.BuyApples(seller,2000))
        cout<<"실패"<<endl;

    cout<<"과일 판매자의 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;
}