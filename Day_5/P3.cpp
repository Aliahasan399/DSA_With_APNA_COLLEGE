/*
Question 3 : WAP to input a number and check whether the number is an Armstrong
number or not.
An Armstrong number is a number that is equal to the sum of cubes of its digits. 
*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll number, temp, sum = 0, rem;
    cout << "Enter a number : ";
    cin >> number;
    temp = number;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if (number == sum)
        cout << "The number is an Armstrong number." << endl;
    else
        cout << "The number is not an Armstrong number." << endl;
    return 0;
}