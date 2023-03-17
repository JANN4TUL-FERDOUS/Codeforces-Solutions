#include<iostream>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        int s1=0,s2=0;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a;
            if(a==1) s1++;
            else s2++;
        }
        if((s1+2*s2)%2!=0 || s1%2!=0 ||(s1==0 && s2%2!=0))cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}