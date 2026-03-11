// decending order
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 20, 4, -1, 3};
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] < array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}