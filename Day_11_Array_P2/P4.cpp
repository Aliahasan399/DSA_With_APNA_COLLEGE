// findout Maximum subarray sum with applying kadane algorithom
#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, -3, 6, -5, 4, 2};
    int max_subarray_sum = INT_MIN;
    int currsum = 0;
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        currsum = currsum + array[i];
        max_subarray_sum=max(max_subarray_sum,currsum);
        if (currsum<0)
            currsum=0;
    }
    cout << "The maximum subarray sum is : " << max_subarray_sum << endl;
}