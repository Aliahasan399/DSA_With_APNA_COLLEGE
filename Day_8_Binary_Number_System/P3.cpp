//Octal to Decimal
#include <iostream>
using namespace std;
int main()
{
    int Octal_num, pow = 1, decimal_num = 0;
    cout << " Enter a octal number : ";
    cin >>Octal_num;
    int temp = Octal_num;
    while (temp != 0)
    {
        decimal_num += (temp % 10) * pow;
        pow *= 8;
        temp /= 10;
    }
    cout << "The Octal number " << Octal_num << " converted in decimal number : " << decimal_num;
}