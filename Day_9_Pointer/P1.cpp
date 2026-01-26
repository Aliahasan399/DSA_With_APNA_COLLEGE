/*
Write a program to swap two numbers using pointers.
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *ptr1, *ptr2, temp;

    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    ptr1 = &a;
    ptr2 = &b;

    // swap values using pointers
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "After swapping:\n";
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
