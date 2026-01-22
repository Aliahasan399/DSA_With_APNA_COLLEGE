/*Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg : 371 is an armstrong number.
3*3*3 + 7*7*7 + 1*1*1 = 371*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll number,temp,sum=0,rem;
    cout << "Enter a number : ";
    cin >> number;
    temp=number;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(number == sum)
        cout << "The number is an Armstrong number." << endl;
    else
        cout << "The number is not an Armstrong number." << endl;
    return 0;
}