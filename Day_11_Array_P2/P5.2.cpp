#include <iostream>
using namespace std;

void Max_profit(int *prices, int n)
{
    // Array to store the lowest price available for buying up to day 'i'
    int best_buy[100000];

    // Initialize the first day with a very high value since there's no previous day to buy
    best_buy[0] = INT_MAX;

    // Loop to fill best_buy array: for each day, find the minimum price from all previous days
    for (int i = 1; i < n; i++)
    {
        // The best buy price for today is the minimum of yesterday's best buy and yesterday's actual price
        best_buy[i] = min(best_buy[i - 1], prices[i - 1]);
    }

    int Max_profit = 0;

    // Loop through each day to calculate potential profit if we sold on that day
    for (int i = 0; i < n; i++)
    {
        // Profit = Current Price - Best buying price found earlier
        int curr_profit = prices[i] - best_buy[i];

        // Update Max_profit if today's potential profit is the highest seen so far
        Max_profit = max(curr_profit, Max_profit);
    }

    // Output the final result
    cout << "Max profit = " << Max_profit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(int);

    // Call the function with the input array and its size
    Max_profit(prices, size);
}