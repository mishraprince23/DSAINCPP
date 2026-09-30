#include<iostream>
using namespace std;
int main(){
    int arr[] = { 74,96,91,57,76,89};
    int n =sizeof(arr)/4;
    // int sum =0;
    //  int product =1;
    int max =0;

    // cout<<sizeof(marks)/4<<endl;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max;
}
