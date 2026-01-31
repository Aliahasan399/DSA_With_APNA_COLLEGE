//sub array print
#include<iostream>
using namespace std;
int main(){
    int array[]={2,-3,6,-5,4,2};
    int size=sizeof(array)/sizeof(int);
    int y=0;
    for (int i=0;i<size;i++)
    {
        int sum=0;

        for (int j = i; j < size; j++)
        {
            sum = sum + array[j];
            cout << sum << ",";
        }
        cout << endl;
    }
}