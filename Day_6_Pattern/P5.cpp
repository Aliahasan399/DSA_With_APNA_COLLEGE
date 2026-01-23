//print hollow reactangle
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many lines (height) do you want to draw: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns (using n+1 for a slight rectangular shape)
        for (int j = 1; j <= n + 1; j++)
        {

            // Check if we are on the boundary
            if (i == 1 || i == n || j == 1 || j == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print space for the hollow center
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}