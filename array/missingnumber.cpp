#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<=n;i++){
            bool flag = false;
            for(int ele :nums){
                if(ele ==i){
                    flag = true;
                    break;
                }
            }
            if(flag == false) return i;
        }
        return 56;

    }
};
int main(){
    vector<int> numbers = { 3,0,1};
    Solution ob;
    int ans = ob.missingNumber(numbers);
    cout<<"Missing number"<<ans;

}