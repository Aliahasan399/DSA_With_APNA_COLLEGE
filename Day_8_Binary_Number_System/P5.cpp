#include <iostream>
using namespace std;

int main()
{
    char hex[20];
    int decimal = 0, base = 1;

    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    // Find length
    int i = 0;
    while (hex[i] != '\0')
        i++;

    // Convert from right to left
    for (int j = i - 1; j >= 0; j--)
    {
        if (hex[j] >= '0' && hex[j] <= '9')
            decimal += (hex[j] - '0') * base;
        else if (hex[j] >= 'A' && hex[j] <= 'F')
            decimal += (hex[j] - 'A' + 10) * base;
        else if (hex[j] >= 'a' && hex[j] <= 'f')
            decimal += (hex[j] - 'a' + 10) * base;

        base *= 16;
    }

    cout << "Decimal number: " << decimal;
    return 0;
}
