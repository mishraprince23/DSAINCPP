#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    
    // Selection Sort (Largest first - Ascending)
    for (int i = n - 1; i > 0; --i) {
        int max_idx = 0; // Assume the first element is the largest
        
        // Scan the unsorted portion (from index 1 to i)
        for (int j = 1; j <= i; ++j) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        
        // Swap the found maximum with the last unsorted element
        std::swap(arr[i], arr[max_idx]);
    }

    // Print the sorted array
    std::cout << "Sorted array (Ascending): ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
