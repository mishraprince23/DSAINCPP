#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {5,4,3,2,6,1};
    int n = arr.size();
    // selectionsortforonestep
    // int mn = arr[0],mnIdx = 0;
    // for(int i = 0;i<n;i++){
    //     if(arr[i] < mn){
    //         mn = arr[i];
    //         mnIdx = i;
    //     }
    // }
    for(int j = 0; j<n-1;j++){
        int mn = arr[j],mnIdx = j;
        for(int i = j;i<n;i++){
        if(arr[i] < mn){
            mn = arr[i];
            mnIdx = i;
        }
    }
    swap(arr[j],arr[mnIdx]);
    for(int i =0; i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    

}
}
