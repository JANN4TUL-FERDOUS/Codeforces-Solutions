#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=1;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) s++;
        }
        cout<<s/2<<endl;
    }
    return 0;
}