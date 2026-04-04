// sub array print
#include<iostream> 
using namespace std;
int main()
{
    int array[] = {1,4,1,3,2,4,3,7};
    int size = sizeof(array) / sizeof(int);
    int freq[size+1]={0,0};
    int miniVal=INT_MAX,maxVal=INT_MIN;
    for(int i=0;i<size;i++){
        miniVal=min(miniVal,array[i]);
        maxVal=max(maxVal,array[i]);
    }
    for (int i = 0; i < size ; i++)
    {
        freq[array[i]]++;
    }
    for (int i = miniVal,k=0;i<maxVal; i++)
    {
        while(freq[i]>0){
            array[k++]=i;
            freq[i]--;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
// int main()
// {
//     int array[] = {5, 1, 4, 2, 3};
//     int size = sizeof(array) / sizeof(int);
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (array[i] < array[j])
//             {
//                 swap(array[i], array[j]);
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
