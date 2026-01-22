/*
Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
(Assume N >= 2) 
*/
#include <iostream>
using namespace std;
int main()
{
    int number,N=2;
    cout << "Enter a number : ";
    cin >> number;
    if(number<2)
    cout << "Entered number doesn't greater than 2.";
    else
{
    do
    {
        bool isprime = true;
        for(int i=2;i<N;i++)
        {
            if(N%i==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        cout << N << " ";
        N++;
    } while (N!= number+1);
}
return 0;
}