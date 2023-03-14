#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x[27]={0},i,s=1;
        string a;
        char c;
        cin>>a;
        int l=a.length();
        if(l==1)  cout<<a[0]<<endl;
        else{
            for(i=0;i<l;i++){
                if(a[i]!=a[i+1]){
                    if(s%2==1) x[a[i]-96]=1;
                    s=1;
                }
                else s++;
            }
            if(a[l-1]==a[l-2] && (s+1)%2==1) x[a[l-1]-96]=1;
            //for(i=1;i<=26;i++) cout<<x[i]<<" ";
            for(i=1;i<=26;i++){
                if(x[i]==1){
                    c='a'-1+i;
                    cout<<c;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}