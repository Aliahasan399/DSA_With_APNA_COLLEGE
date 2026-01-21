#include<iostream>
using namespace std;
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
    if(array[i]%2==0)
    {
        cout << array[i] << " is Even Number" << endl;
        
    }
    else{
        cout << array[i] << " is Odd Number" << endl;
    }
    }
    
}