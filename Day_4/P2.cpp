/*Question 2 : Write a C++ program that takes a year from the user and print whether
that year is a leap year or not. */
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year;
    if(year %400 == 0 || (year % 4 ==0 && year %100 != 0))
    cout << "The year is a leap year.";
    else
    cout << "The year is not a leaf year."; 
    return 0;
}