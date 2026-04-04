#include <iostream>
using namespace std;
int main()
{
    int array[] = {5, 1, 4, 2, 3};
    int size = sizeof(array) / sizeof(int);
    for (int i = 1; i < size; i++)
    {
        int curr = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (array[curr] > array[j])
            {
                swap(array[curr], array[j]);
                curr = j;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}