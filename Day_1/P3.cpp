#include <iostream>
using namespace std;
int main()
{
    int array [5];
    for(int i=0;i<5;i++)
    {
        cin >> array [i];
    }
    int largest =array[0];
    for (int i = 1; i < 5; i++)
    {
        if(largest<array[i])
        {
            largest=array[i];
        }
    }
    cout << "The Largest Number is = " << largest << endl;
}