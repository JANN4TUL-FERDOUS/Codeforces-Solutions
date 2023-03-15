#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,x=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0) s++;
            else x=i;

        }
        if(s==n){
            if(n==1)cout<<"-1\n";
            else
                cout<<"2\n"<<"1 "<<"2"<<endl;
        }
        else cout<<"1"<<endl<<x+1<<endl;
    }
    return 0;
}