/*Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct. */
#include <iostream>
using namespace std;
int IS_twice(int nums[], int n)
{
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int size = sizeof(nums) / sizeof(int);
    if (IS_twice(nums, size))
        cout << "True";
    else
        cout << "False";
    return 0;
}