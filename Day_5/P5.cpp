/*
Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
(Assume N >= 2)
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
This is a series where each number is a sum of previous 2 numbers in the series. Eg
:
1 = 0 + 1,
2 = 1 + 1,
3 = 1 + 2,
5 = 2 + 3,
8 = 3 + 5 & so on. 
*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll number,first=0,second=1,next;
    cout << "Enter a number : ";
    cin >> number;
    cout << first <<" " << second;
    while((number-2)!=0)
    {
        next=first+second;
        cout << " " << next;
        first=second;
        second=next;
        number --;
    }
return 0;
}
