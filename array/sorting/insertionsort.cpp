#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &arr){

}

int main(){
    vector<int> arr = {5,4,3,2,6,1};
    int n = arr.size();
  
    for(int i = 0; i<=n-1;i++){
        int j =i;
        while(j>=1 && arr[j] <arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]; }

   
    {
    cout<<endl;}
    

}
