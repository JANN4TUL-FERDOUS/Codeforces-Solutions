#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=1,s=1;
        cin>>n;
        int a[n],b[n],j=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]!=a[i-1] && a[i]>s1){
                 s++;
                 s2=1;
            }
            else{
                if(s2==1 || a[i]==s1){
                    s++;
                    a[i]++;
                    s1=a[i];
                    s2=0;
                }
            }
        }
        cout<<s<<endl;

    }
    return 0;
}