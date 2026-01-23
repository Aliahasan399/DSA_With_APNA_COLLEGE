// Half of pyramid patter with Character
#include <iostream>
using namespace std;
int main()
{
    int n;
    char X = 'A';
    cout << " How many line are you draw :";
    cin >> n;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = 0; j <= i; j++)
        {
            // print character
            cout << X++ << " ";
        }
        // line end
        cout << endl;
    }
}