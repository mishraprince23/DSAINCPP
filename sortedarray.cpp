#include <iostream>
using namespace std;
int main(){
    int n[]={2,1,5,3,7};
    int i=0;
    int temp=0;
    while(i<sizeof(n)/4){
        cout<<n[i];
        i++;
    }
    for(int i=0;i<sizeof(n)/4;i++){
        for(int j=i+1;j<(sizeof(n)/4)-1;j++){
            if(n[j]<n[i]){
                 temp=n[j];
                 n[j]=n[i];
                 n[i]=temp;
            }
        }
    }
    int k=0;
     cout<<"\n";
     while(k<sizeof(n)/4){
        cout<<n[k];
        k++;
    }
    return 0;
}