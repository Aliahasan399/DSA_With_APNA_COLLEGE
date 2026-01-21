#include <iostream>
using namespace std;
int main()
{
    cout << "The Number whice multiples of 3 "<< endl;
    for (int i = 10; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " " << endl;
        }
    }
    
}