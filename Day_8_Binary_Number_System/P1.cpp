//binary to decimal
#include<iostream>
using namespace std;
int main()
{
int binary_num,pow=1,decimal_num=0;
cout << " Enter a binary number : ";
cin >> binary_num;
int temp=binary_num;
while(temp!=0)
{
    decimal_num+=(temp%10)*pow;
    pow*=2;
    temp/=10;
}
cout <<"The binary number "<<binary_num<<" converted in decimal number : "<<decimal_num;
}