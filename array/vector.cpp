#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> arr(5,18);
    vector<int> arr(8,-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    arr.push_back(5);
    arr.push_back(43);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}

