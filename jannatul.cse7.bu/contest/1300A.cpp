#include<iostream>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int s1=0,s2=0,a[n];
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==0) s2++;
            else s1+=a[i];
        }
        if(s1==-s2) s2++;
        else if(s2==0 && s1==0) s2++;
        cout<<s2<<endl;
    }
    return 0;
}