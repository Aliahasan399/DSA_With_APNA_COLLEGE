#include <iostream>
using namespace std;
void sub_array(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
                sum += arr[i];
            }
            cout << sum;
            cout << ",";
        }
        cout << endl;
    }
}
int main()
{
    int array[] = {2, -3, 6, -5, 4, 2};
    int size = sizeof(array) / sizeof(int);
    sub_array(array, size);
    cout << "end";
}
