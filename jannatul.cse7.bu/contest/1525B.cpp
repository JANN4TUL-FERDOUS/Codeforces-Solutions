#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==i+1) s++;
        }
        if(s==n) cout<<"0\n";
        else if(a[0]==1 || a[n-1]==n) cout<<"1\n";
        else if(a[0]==n && a[n-1]==1) cout<<"3\n";
        else cout<<"2\n";
    }
    return 0;
}