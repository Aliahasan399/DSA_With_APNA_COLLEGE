#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(int);

    int min_price = INT_MAX;
    int max_profit = 0;

    for (int i = 0; i < size; i++)
    {
        // Update the lowest price we've seen until today
        if (prices[i] < min_price)
        {
            min_price = prices[i];
        }
        // Or, see if selling today gives us a better profit than before
        else if (prices[i] - min_price > max_profit)
        {
            max_profit = prices[i] - min_price;
        }
    }

    cout << "Maximum Profit: " << max_profit << endl;
    return 0;
}