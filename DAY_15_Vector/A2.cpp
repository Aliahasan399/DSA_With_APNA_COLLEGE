#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 4};
    // Size is n+1 so we can use indices 1 to n directly
    vector<int> count(nums.size() + 1, 0); 

    for(int i = 0; i < nums.size(); i++) {
        count[nums[i]] = count[nums[i]] + 1;
    }

    int duplicate = -1, missing = -1;

    // Start from 1 because the set is 1 to n
    for(int i = 1; i < count.size(); i++) { 
        if (count[i] == 2) {
            duplicate = i; // Store the number (index), not the count
        } 
        else if (count[i] == 0) {
            missing = i;   // Store the number (index)
        }        
    }

    cout << "[" << duplicate << "," << missing << "]" << endl;
    return 0;
}