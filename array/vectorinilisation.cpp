#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    // cout<<v.capacity(); for eacyhloop
    // for(int ele : v){
    //     cout<<ele<<" ";
    // }
    // sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int ele : v){
        cout<<ele<<" ";
    }













}