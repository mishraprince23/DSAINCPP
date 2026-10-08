#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

// Function to calculate minimum boats needed

    sort(people.begin(), people.end()); // Sort weights
    int left = 0, right = people.size() - 1;
    int boats = 0;

    while (left <= right) {
        // If lightest + heaviest fits in one boat
        if (people[left] + people[right] <= limit) {
            left++; // Move to next lightest
        }
        // Always move the heaviest person
        right--;
        boats++;
    }
    return boats;
} 



 
};