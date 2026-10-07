#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
    //     int n = arr.size();
    //     // code here
    //     for(int j = 0; j<n-1;j++){
    //           int mn = arr[j],mnIdx = j;
    //           for(int i = j;i<n;i++){
    //           if(arr[i] < mn){
    //               mn = arr[i];
    //               mnIdx = i;
    //           }
    //       }
    //       swap(arr[j],arr[mnIdx]);
    // }
    sort(arr.begin(),arr.end());
    return arr[k-1];
    }
};
int main(){
    Solution s;
    vector<int> arr = {7,6,8,3,2};
    int k = 3;
    s.kthSmallest(arr,k);
   
    return 0;

}