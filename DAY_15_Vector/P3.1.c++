#include<iostream>
#include<vector>
using namespace std;
vector <int> pairsum (vector<int> arr,int target){

     int start=0,end=arr.size()-1;
     vector <int> answer;
     while(start<end)
        {
            int sum=arr[start]+arr[end];
            if(target==sum){            
                answer.push_back(start);
                answer.push_back(end);
                return answer;
            }
            else if (sum>target){
                end--;
            }
            else{
                start++;
            }      
        }
        return answer;
}
int main(){
    vector<int> numbers={2,7,11,15};
    int target=9;
    vector<int> answer=pairsum(numbers,target);
    cout<< answer[0] <<","<<answer[1];
}