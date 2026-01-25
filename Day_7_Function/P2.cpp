/*Question 2 : Write a function to calculate the sum of digits of a number. */
#include <iostream>
using namespace std;
//function create
int Sum_of_digits(int num)
{
    int sum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number;
    cout << "the sum of digits of a number : " << Sum_of_digits(number) << endl;// function call and print
}