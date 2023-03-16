#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=-1,i,y=0;
        cin>>n;
        string a,b="2020";
        cin>>a;
        for(i=0;i<4;i++){
            if(a[i]!=b[i]) {
                x=i;
                break;
            }
        }
        if(x==-1) cout<<"YES\n";
        else{
            for(i=n-4+x;i<n;i++){
                if(a[i]!=b[x++]){
                    y=1;
                    break;
                }
            }
            if(y==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}