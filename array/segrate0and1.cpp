#include<iostream>
#include<vector>
using namespace std;
void segrate(vector<int> &arr){
    int zero =0,ones =0; 
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) zero++;
        else ones++;
    }
    for(int i=0;i<zero;i++){
        arr[i] =0;

    }
    for(int i =zero;i<arr.size();i++){
        arr[i] =1;

    }



}
int main(){
    vector<int> arr= {1,0,1,0,0,1,0,1,0};
    cout<<"before sortes";
    for(int num : arr){
        cout<<num<<" ";


    }
    cout<<endl;
    segrate(arr);
    cout<<"after";
    for(int num : arr){
        cout<<num<<" ";
    }
}
