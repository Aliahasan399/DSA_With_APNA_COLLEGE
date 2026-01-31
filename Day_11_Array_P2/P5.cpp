//Trading Buy stock or Sell stock and how much are you earn profit
#include <iostream>
using namespace std;
int main()
{
    int prices[] = {7, 6, 5 , 4 ,3, 2,1};
    int Buy_stock = INT_MAX,Sell_stock=INT_MIN,Profit;
    int size = sizeof(prices) / sizeof(int);
    int currsum = 0, start, end = size;
    for (int i = 0; i < end; i++)
    {
        if (Buy_stock > prices[i])
        {
            Buy_stock = prices[i];
            start = i;
        }
    }
    for (int i = start; i < size; i++)
    {
        Sell_stock = max(Sell_stock, prices[i]);
    }
    Profit=-Buy_stock+Sell_stock;
    if(Profit>0)
    cout << "Profit from Stock Market : " << Profit;
    else
        cout << "Profit from Stock Market : 0";
} 