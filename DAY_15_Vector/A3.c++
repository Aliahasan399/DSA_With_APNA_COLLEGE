#include <iostream>
#include <vector>
#include <algorithm> // Required for min() and max()

using namespace std;

/**
 * Calculates the maximum area of water a container can store.
 * Time Complexity: O(n) - Single pass through the height vector.
 * Space Complexity: O(1) - Uses constant extra space.
 */
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        // Calculate the width between the two pointers
        int width = right - left;
        
        // The height of the water is limited by the shorter line
        int current_height = min(height[left], height[right]);
        
        // Update max_area if current area is larger
        int current_area = current_height * width;
        max_area = max(max_area, current_area);

        // Strategy: Move the pointer pointing to the shorter line
        // We do this because the area is limited by the shorter side.
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(heights);

    cout << "Maximum area found: " << result << endl;

    return 0;
}