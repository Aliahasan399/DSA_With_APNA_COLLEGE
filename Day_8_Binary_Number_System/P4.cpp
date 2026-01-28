// Decimal to Octal
#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int Octal[32];
    int i = 0;

    while (decimal > 0)
    {
        Octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    cout << "Octal number: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << Octal[j];
    }

    return 0;
}
