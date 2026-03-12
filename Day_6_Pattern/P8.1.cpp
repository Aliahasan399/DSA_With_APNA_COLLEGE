#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A';
    // First loop for upper pyramid
    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // For star
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Second loop for lower pyramid
    for (int i = n; i > 0; i--)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // For star
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
