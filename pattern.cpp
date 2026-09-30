#include<iostream>
using namespace std;
int main(){
    int m,n;
// int n; 

    //  cout<<"enter the no";
     // cin>>n;
  
    cout<<"enter the value of m,n";
    cin>>m>>n;
    // cout<<"enter the collomn";
    // cin>>n;
    // for(int i= 1;i<=m;i++){
    //     for(int j= 1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // for(int i= 1;i<=n;i++){
    //     for(int j= 1;j<=n;j++)
    //     {
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;

    
    // }
    // for(int i= 1;i<=n;i++){
    //     for(int j= 1;j<=n;j++)
    //     {
    //         cout<<(char)(j+96)<<" ";
    //     }
    //     cout<<endl;

    
    //  }
    //  for(int i= 1;i<=n;i++){
    //     for(int j= 1;j<=n;j++)
    //     {if(i%2==0)
    //         cout<<(char)(i+64)<<" ";
    //      else  cout<<(char)(i+96)<<" "; 
    //     }
    //     cout<<endl;

    
    // }
    // for(int i= 1;i<=n;i++){
    //     for(int j= 1;j<=i;j++){
    //          cout<<j;
    //     }
    //      cout<<endl;






    // }
    // for(int i= 1;i<=n;i++){
    //      for(int j= 1;j<=i;j++)
    //      {if(i%2==0)
    //          cout<<(char)(j+64)<<" ";
    //      else  cout<<j<<" "; 
    //      }
    //      cout<<endl;
    //     }


        //  for(int i= 1;i<=n;i++){
        //      for(int j= 1;j<=1+n-i;j++){
        //       cout<<"*"<<"  ";
        //  }
        //   cout<<endl;
        // }
        // int mid = n/2+1;

        // for(int i=1;i<=n;i++){
        //      for(int j=1;j<=n;j++){
        //         if(i==mid  || j==mid )  cout<<"* ";
        //      else cout<<"  ";
        //  }
        //   cout<<endl;
        // }
        // int a = 1;
        // for(int i=1;i<=n;i++){
        //      for(int j=1;j<=i;j++){
        //           cout<<a++<<" ";
            
        //  }
        //   cout<<endl;
        // }

        //  for(int i=1;i<=n;i++){
        //       for(int j=1;j<=i;j++){
        //         if((i+j)%2==0) cout<<1<<" ";
        //         else cout<<0<<" ";
        //     }
        //     cout<<endl;


        //       }
        // for(int i=1;i<=n;i++){
        //       for(int j=1;j<=n;j++){
        //         if((i+j)>n) cout<<"*";
        //         else cout<<" ";
        //     }
        //     cout<<endl;


        //       } method 1
        // int nsp =n-1,nst=1;
        // for(int i=1;i<=n;i++){
        //        for(int j=1;j<=nsp;j++){
        //         cout<<" ";
        //        }
              
        //          for(int j=1;j<=nst;j++){
        //         cout<<"* ";
        //     }
        //     nsp--;
        //     nst+=2;
        //     cout<<endl;
        // }

        // for(int i=1;i<=n;i++){
        //       for(int j=1;j<=n;j++){
        //         if((i+j)>n) cout<<(char)(i+64);
        //         else cout<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=1;i<=m;i++){
             for(int j=1;j<=n;j++){
                if(i==1 ||i==m || j==1 || j==n )  cout<<"* ";
             else cout<<"  ";
         }
          cout<<endl;
        }

        



    



               




    


        







}