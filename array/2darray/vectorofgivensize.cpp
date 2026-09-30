#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int m,n;
    cout<<"enter rows";
    cin>>m;
    cout<<" enter column";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    arr.push_back(vector<int>(4,-4));
     for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}