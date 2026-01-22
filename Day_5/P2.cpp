/*
Question 2 : WAP to print the multiplication table of a number, entered by the user. 
*/
#include <iostream>
using namespace std;
int main()
{
    int number,n=1;
    cout << "Enter a number :- ";
    cin >> number;
    cout << "The multiplication table of " << number << " number"<< endl;
    while (n != 11)
    {
        cout << number << " X " << n << " = " << number*n << endl;
        n++;
    }
    return 0;
}