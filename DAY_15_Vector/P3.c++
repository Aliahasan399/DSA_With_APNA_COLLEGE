#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers={2,7,11,15};
    int target=9;
    int start=0,end=numbers.size()-1;
    for (;start<end;)
    {
        int sum=numbers[start]+numbers[end];
        if(target==sum)
        {
            cout <<"Find in ["<< start <<"," << end <<"]";
            return 0;

        }
        else if (sum>target)
        {
            end--;
        }
        else
        {
            start++;
        }      
    }
}