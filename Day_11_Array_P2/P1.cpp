//sub array print
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=sizeof(array)/sizeof(int);
    int y=0;
    for (int i=0;i<size;i++)
    {
        int sum=0;

        for (int j = i; j < size; j++)
        {
            sum = (sum * 10) + array[j];
            cout << sum << ",";
        }
        cout << endl;
    }
}