#include<iostream> 
using namespace std;
int main()
{
    int array[] = {3,6,2,1,8,7,4,5,3,1};
    int size = sizeof(array) / sizeof(int);
    int frqe[100000]={0};
    int minival=INT_MAX,maxval=INT_MIN;
    for(int i=0;i<size;i++)
    {
        frqe[array[i]]++;
        minival=min(minival,array[i]);
        maxval=max(maxval,array[i]);
    }
    for(int i=minival,j=0;i<=maxval;i++)
    {
        while(frqe[i]>0)
        {
            array[j++]=i;
            frqe[i]--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

