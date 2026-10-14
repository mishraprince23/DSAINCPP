#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int low = 0, high = n - 1;
        int firstPositive = n;

        // Find first positive number
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > 0) {
                firstPositive = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        int positiveCount = n - firstPositive;

        low = 0;
        high = n - 1;
        int firstNonNegative = n;

        // Find first non-negative number
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= 0) {
                firstNonNegative = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        int negativeCount = firstNonNegative;

        return max(positiveCount, negativeCount);
    }
};
