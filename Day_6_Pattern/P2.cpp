#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = 1; j <= n-i; j++)
        {
            // print star
            cout << "*";
            if(n==j)
            break;
            cout<< " ";
        }
        // line end
        cout << endl;
    }
}