/*
Question 4 : Write a function that prints the largest of 3 numbers.
*/
#include<iostream>
using namespace std;

int Check_largest_numbers(int a,int b,int c)
{
    
    if(a>b && a>c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    else{
        return c;
    }

}
int main(){
int a,b,c;
cout << "Enter Three numbers : " ;
cin >> a >> b >> c;
cout << "The largest number is = " << Check_largest_numbers(a,b,c);
return 0;
}