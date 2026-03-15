#include <iostream>
using namespace std;

/**
 * Problem: Search in Rotated Sorted Array
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */
int searchInRotatedArray(int nums[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        // Identify which half is sorted
        if (nums[start] <= nums[mid])
        {
            // Left half is sorted
            if (target >= nums[start] && target < nums[mid])
            {
                // Target is within the sorted left half
                end = mid - 1;
            }
            else
            {
                // Target must be in the right half
                start = mid + 1;
            }
        }
        else
        {
            // Right half is sorted
            if (target > nums[mid] && target <= nums[end])
            {
                // Target is within the sorted right half
                start = mid + 1;
            }
            else
            {
                // Target must be in the left half
                end = mid - 1;
            }
        }
    }

    return -1; // Target not found
}

int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums) / sizeof(int);
    int target = 0;

    int result = searchInRotatedArray(nums, n, target);

    if (result != -1)
    {
        cout << "Target " << target << " found at index: " << result << endl;
    }
    else
    {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}