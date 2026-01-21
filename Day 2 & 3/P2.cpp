#include <iostream>
using namespace std;
int main()
{
    float pencil_price,pen_price,eraser_price;
    cout << "Enter cost of 3 items" << endl << "Items are a pencil, a pen and an eraser."<< endl;
    cin >> pencil_price >> pen_price >> eraser_price;
    float Total_cost = pencil_price+pen_price+eraser_price;
    float GST_Tax = (18 / 100.00) * Total_cost ;
    cout << "The total cost without GST tax = " << Total_cost << endl << "The GST tax = " << GST_Tax << endl << "Total Cost = " << Total_cost + GST_Tax;
}