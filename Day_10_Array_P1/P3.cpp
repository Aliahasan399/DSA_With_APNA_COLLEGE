//Swaping array without using extra space
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(int);
    int start=0,end=size-1;
    for (;start<end;)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    cout << "After Reverse the array\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}