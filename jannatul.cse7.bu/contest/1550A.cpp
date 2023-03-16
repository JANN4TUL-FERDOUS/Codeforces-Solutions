#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,i=1,x=0;
        cin>>n;
        while(s<n){
            x++;
            s+=i;
            i+=2;
        }
        cout<<x<<endl;
    }
    return 0;
}