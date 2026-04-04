#include <iostream>
using namespace std;

int main()
{
    // Initialize the unsorted array
    int array[] = {5, 1, 4, 2, 3};

    // Calculate the total number of elements in the array
    int size = sizeof(array) / sizeof(int);

    // Outer loop: Moves the boundary of the sorted and unsorted parts
    for (int i = 0; i < size - 1; i++)
    {
        // Assume the first element of the unsorted part is the smallest
        int miniIdx = i;

        // Inner loop: Find the index of the actual smallest element in the remaining unsorted array
        for (int j = i + 1; j < size; j++)
        {
            // If a smaller element is found, update miniIdx
            if (array[miniIdx] > array[j])
            {
                miniIdx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        // This places the smallest remaining value into its correct sorted position
        swap(array[i], array[miniIdx]);
    }

    // Loop to print the final sorted array
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}