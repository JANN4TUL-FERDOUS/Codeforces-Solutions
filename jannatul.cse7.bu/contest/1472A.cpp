#include<iostream>
using namespace std;
int main(){
    int t,w,h,i,n;
    cin>>t;
    while(t--){
        i=1;
        cin>>w>>h>>n;
        while(w%2==0 || h%2==0){
            if(w%2==0){
                i*=2;
                w/=2;
            }
            else if(h%2==0){
                i*=2;
                h/=2;
            }
        }
        if(i>=n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}