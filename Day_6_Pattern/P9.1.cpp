#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // For space
        for (int k = 1; k <= n * 2 - i * 2; k++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // For space
        for (int k = 1; k <= n * 2 - i * 2; k++)
        {
            cout << " ";
        }
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
