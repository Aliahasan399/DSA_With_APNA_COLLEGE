#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initial vector with duplicates and missing numbers
    vector<int> vec = {1, 2, 2, 4, 5, 5, 7, 8, 8, 8, 11};

    // Loop through the vector to check if current element is >= the next element
    for (int i = 0; i < vec.size() - 1; i++) {
        
        // If the current number is greater than or equal to the next
        if (vec[i] >= vec[i + 1]) {
            
            // Print the duplicate found and what the next number "should" be
            cout << vec[i] << "," << vec[i] + 1 << endl;
            
            // Update the next element in the vector to be strictly increasing
            // This 'fixes' the sequence as it iterates
            vec[i + 1] = vec[i] + 1;
        }
    }
    
    return 0;
}