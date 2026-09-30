#include<iostream>
using namespace std;
#include<climits>

int main(){
    int arr[] = { 74,96,91,57,76,89};
    int n =sizeof(arr)/4;
    int mx =INT_MIN;

   
    
    for(int i=0;i<=n-1;i++){
        if(arr[i]>mx) mx = arr[i];
        // mx = max(mx,arr[i]);
    }
    int smx =INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>smx && arr[i]!=mx) smx = arr[i];
    }
    cout<<mx<<" "<<smx<<endl;





}  