#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,i,j;
    cin>>t;
    while(t--){
        cin>>a;
        if(a%2==0){
            for(i=a;i>0;i--) cout<<i<<" ";
        }
        else{
            for(i=a-1;i>1;i--) cout<<i<<" ";
            cout<<a<<" "<<1;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}