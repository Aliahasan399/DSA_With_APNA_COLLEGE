/*
Question 3 : Print the Palindromic Pattern with Numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // For space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // For left side numbers
        for(int j=i;j>0;j--)
        {
            cout << j;
        }
        // For right side numbers
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
