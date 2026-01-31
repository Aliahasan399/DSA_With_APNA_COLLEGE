// findout maximum and minmum from Max subarray sum 
#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, -3, 6, -5, 4, 2};
    int max_subarray_sum=INT_MIN,mini_subarray_sum=INT_MAX;
    int size = sizeof(array) / sizeof(int);
    int y = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = i; j < size; j++)
        {
            sum = sum + array[j];
            if (max_subarray_sum <= sum)
                max_subarray_sum = sum;
            if(mini_subarray_sum>=sum )
                mini_subarray_sum=sum;
            cout << sum << ",";
        }
        
        cout << endl;
    }
    cout << "The maximum subarray sum is : " << max_subarray_sum<< endl;
    cout << "The minimum subarray sum is : " << mini_subarray_sum;
}