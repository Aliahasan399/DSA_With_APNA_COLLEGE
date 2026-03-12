#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
}
