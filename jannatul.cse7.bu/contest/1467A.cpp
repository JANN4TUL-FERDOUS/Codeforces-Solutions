#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,x=0;
        if(n>=3){
            cout<<"989";
            for(i=3;i<n;i++){
                 cout<<x++;
                 if(x==10) x=0;
             }
         }
         else{
            int a[3]={9,8,9};
            for(i=0;i<n;i++)
                cout<<a[i];
         }
         cout<<endl;
     }
     return 0;
 }