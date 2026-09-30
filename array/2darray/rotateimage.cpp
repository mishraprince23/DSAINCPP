#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;




class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
         int n =arr.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
               swap(arr[i][j],arr[j][i]); 
            }
        }
        for(int i =0;i<n;i++){
            reverse(arr[i].begin(),arr[i].end());
        }
         for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cout<<arr[i][j];

            }
            cout<<endl;
        }


        
    }
};
int main(){
     Solution s;
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    
    s.rotate(arr);

    return 0;

}