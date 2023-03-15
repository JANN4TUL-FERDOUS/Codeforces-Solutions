#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r,s=0;
        cin>>l>>r;
        if(l==r) cout<<"0\n";
        else{
            if((r+1)/2>=l) cout<<(r+1)/2-1<<endl;
            else cout<<r-l<<endl;
        }
    }
    return 0;
}