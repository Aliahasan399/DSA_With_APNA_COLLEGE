/*
Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
outputs : a^2 + b^2 + 2*ab.
*/
#include <iostream>
#include <cmath>
using namespace std;
int Calculate(int a,int b)
{
    return pow(a,2)+pow(b,2)+2*a*b;
}
int main(){
    int a,b;
    cout << "we are applying a equation (a^2 + b^2 + 2*ab) and calculate the result"<< endl;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "The result of the equation = " << Calculate(a,b);
}