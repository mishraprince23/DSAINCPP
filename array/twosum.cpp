#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
             for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans[0] =i;
                    ans[1] =j;
                    return ans;
                }
             }

        }
        return ans;

        
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 22;
    vector<int> result = s.twoSum(nums,target);
    cout<<result[0]<<" ,"<<result[1]<<endl;
    return 0;


    return 0;
}