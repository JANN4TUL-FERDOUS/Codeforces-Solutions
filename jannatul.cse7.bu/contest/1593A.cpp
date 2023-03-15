#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        long long a[3],s=0,s1=0,s2=0;
        cin>>a[0]>>a[1]>>a[2];
        s=max(a[0],max(a[1],a[2]));
         for(int i=0;i<3;i++){
            if(s==a[i]) s2++;
         }
        for(int i=0;i<3;i++){
            if(a[i]==s) {
                if(s2>1) cout<<"1 ";
                else cout<<"0 ";
            }
            else cout<<s-a[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}