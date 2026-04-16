#include<iostream> 
using namespace std;
int main()
{
    int array[] = {3,6,2,1,8,7,4,5,3,1};
    int size = sizeof(array) / sizeof(int);
    for(int i=0;i<size;i++)
    {
        int current=i;
        for(int j=i-1;j>=0;j--){
            if(array[current]<array[j])
                {swap(array[j], array[current]);
                current=j;}
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

