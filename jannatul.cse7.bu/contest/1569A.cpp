#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        int n,a,b,s=0;
        cin>>n;
        string x;
        cin>>x;
        for(int i=0;i<n-1;i++){
            if(x[i]!=x[i+1]){
                cout<<i+1<<" "<<i+2<<endl;
                s=1;
                break;
            }
        }
        if(s==0) cout<<"-1 -1\n";
    }
    return 0;
}