#include<iostream> 
using namespace std;
int main()
{
    int array[] = {3,6,2,1,8,7,4,5,3,1};
    int size = sizeof(array) / sizeof(int);
    for(int i=0;i<size;i++)
    {
        int miniIdx=i;
        for(int j=i;j<size;j++){
            if(array[miniIdx]>array[j])
                miniIdx=j;
        }
        swap(array[i], array[miniIdx]);
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

