#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int> arr = {10,20,30,40,50,60,70};
//     int i=0, j= arr.size()-1;
//     while (i<j)
//     {
//         int temp =arr[i];
//         arr[i]=arr[j];
//         arr[j]= temp;
//         i++;
//         j--;
//         // swap(arr[i],arr[j]) second method
//     }
//     for(int x: arr){
//         cout<<x<<endl;
//     }


    





// }
void reverse(int arr[],int i,int j){
    while(i<j){
        int temp =arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

    int main(){
       int arr[] = {1,2,3,4,5,6};
       int n= sizeof(arr)/4;
       int i =0,  j =n-1;
       reverse( arr, i, j);
       for(int i=0;i<n;i++){
        cout<<arr[i];
       }
       cout<<endl;


    }






