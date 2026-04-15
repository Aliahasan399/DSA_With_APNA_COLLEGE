#include<iostream>
using namespace std;
int main(){
    int array[]={1,4,1,3,2,4,3,7};
    int size=(sizeof(array)/sizeof(array[0]));
    int freq[100000]={0};
    int Maxval=INT_MIN;
    int minival=INT_MAX;
    //First step
    for(int i=0;i<size;i++)
    {
        freq[array[i]]++;
        Maxval=max(Maxval,array[i]);
        minival=min(minival,array[i]);
    }
    //Second step
    for(int i=minival,j=0;i<=Maxval;i++)
    {
        while(freq[i]>0)
        {
            array[j++]=i;
            freq[i]--;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
