//pyramid pattern with star
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    // outer loop
    for (int i = 1; i <= n; i++)
    {
        // inner loop
        for (int j = 1; j <= n - i; j++)
        {
            // print gap
            cout << " ";
        }
        for (int k = n - i; k < n; k++)
        {
            cout << "*";
        }
        for (int j = 2; j <= i; j++)
        {
            // print star
            cout << "*";
        }
        // line end
        cout << endl;
    }
}