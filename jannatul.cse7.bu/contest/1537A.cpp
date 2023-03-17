#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,i,x=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s<n) cout<<"1\n";
        else cout<<s-n<<endl;
    }
    return 0;
}