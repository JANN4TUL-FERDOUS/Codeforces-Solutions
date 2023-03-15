#include<iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]=='t') s++;
            else cout<<a[i];
        }
        while(s--) cout<<'t';
        cout<<endl;
    }
    return 0;
}