#include <iostream>
using namespace std;

/**
 * Problem: Trapping Rain Water
 * Strategy: Pre-calculate the highest bar to the left and right for every index.
 * The water trapped at index i is: min(left_max[i], right_max[i]) - height[i].
 */
void Trapping_Rain_Water(int hei[], int n)
{
    // Arrays to store the maximum height encountered so far from both ends
    int left_max[100000];
    int right_max[100000];

    // Initial boundary conditions
    left_max[0] = hei[0];
    right_max[n - 1] = hei[n - 1];

    int watertrap = 0;

    // Fill left_max: tracks the tallest bar to the left of (and including) index i
    for (int i = 1; i < n; i++)
    {
        left_max[i] = max(left_max[i - 1], hei[i]);
    }

    // Fill right_max: tracks the tallest bar to the right of (and including) index i
    for (int i = n - 2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i + 1], hei[i]);
    }

    // Calculate total water trapped
    for (int i = 0; i < n; i++)
    {
        // The water level is limited by the shorter of the two walls
        int curr_water = min(left_max[i], right_max[i]) - hei[i];

        if (curr_water > 0)
        {
            watertrap += curr_water;
        }
    }

    cout << "Total water trapped: " << watertrap << endl;
}

int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(height) / sizeof(int);

    Trapping_Rain_Water(height, size);

    return 0;
}