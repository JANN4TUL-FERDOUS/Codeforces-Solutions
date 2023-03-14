#include<iostream>
using namespace std;
int main(){
    int t,l,i;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        l=a.length();
        int s0=0,s1=0;
        for(i=0;i<l;i++){
            if(a[i]=='1') s1++;
            else s0++;
        }
        if(l==2 || s1==0 || s0==0) cout<<a;
        else{
            int x=max(s0,s1);
            while(l--) cout<<"10";
        }
        cout<<endl;
    }
    return 0;
}