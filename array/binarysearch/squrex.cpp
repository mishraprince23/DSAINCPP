#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        
        for(long long i=0;i<=x;i++){
            if(i*i == x) return i;
            if(i*i>x) return i-1;


        }
        return 45;
    }
};
int main(){
    Solution s;
    int x = 16;
    int result = s.mySqrt(x);
    cout<<result;


}