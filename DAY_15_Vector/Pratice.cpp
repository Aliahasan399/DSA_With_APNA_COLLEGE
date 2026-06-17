#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        int currsum=arr[i];
        for(int j=i+1;j<n;j++){
            currsum+=arr[j];
            if(maxsum<currsum){
                maxsum=currsum;
            }
        }    
    }
    cout << maxsum;
    
}
