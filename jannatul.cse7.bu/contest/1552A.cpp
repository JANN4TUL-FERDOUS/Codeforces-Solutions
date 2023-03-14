#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0;
        cin>>n;
        string a;
        char b[n];
        cin>>a;
        for(i=0;i<n;i++){
            b[i]=a[i];
        }
        sort(a.begin(),a.end());
        for(i=0;i<n;i++){
            if(a[i]!=b[i]) s1++;
        }
        cout<<s1<<endl;
    }
    return 0;
}