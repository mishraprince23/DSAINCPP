#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// int main()
// {
//     vector<int> arr ={1,2,3,4,5,6,7,8};
//     int k =3;
//     int n = arr.size();
//     k =k%n;
//     reverse(arr.begin(),arr.end());
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// }
class Solution {
public:
     void reverse(vector<int>& arr,int i, int j){
        while(i<j){
             
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
     }


    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k =k %n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        for(int x: arr){
            cout<<x<<" ";
        }
        cout<<endl;


        
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int k=3;
    s.rotate(nums,k);
    return 0;
}


