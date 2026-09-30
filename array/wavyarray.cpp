#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i+=2){
           
           
            swap(arr[i],arr[i+1]);
        }
        
    }
};
int main(){
    vector<int> arr = { 1,2,3,4,5,};
    Solution ob;
   ob. sortInWave(arr);
   for(int ele : arr){
    cout<<ele<<" ";
   }
   return 0;
}