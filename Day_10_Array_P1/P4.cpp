//Binary Search
#include <iostream>
using namespace std;
int Binary_search(int array[],int size,int key){
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int array[]={11,15,19,23,27,29,34,38,44,50};
    int size=sizeof(array)/sizeof(int);
    cout << Binary_search(array,size,15);
}