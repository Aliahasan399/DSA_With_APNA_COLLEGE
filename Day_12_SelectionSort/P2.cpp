#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 1, 4, 2, 3};
    int size = sizeof(array) / sizeof(int);

    // Outer loop: Sets the position we are currently filling
    for (int i = 0; i < size - 1; i++)
    {
        // Now tracking the index of the MAXIMUM value instead of the minimum
        int miniIdx = i;

        for (int j = i + 1; j < size; j++)
        {
            // If the current element at j is GREATER than our current max
            // Change the condition to '<' to sort in descending order
            if (array[miniIdx] < array[j])
            {
                miniIdx = j;
            }
        }

        // Swap the largest found element into the current position 'i'
        swap(array[i], array[miniIdx]);
    }

    // Output will be: 5 4 3 2 1
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}