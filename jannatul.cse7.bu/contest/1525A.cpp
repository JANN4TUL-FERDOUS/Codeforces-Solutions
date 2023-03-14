#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=100,y;
        cin>>n;
        while(n!=0){
            int s=n;
            n=x%n;
            x=s;
        }
        cout<<100/x<<endl;
    }
    return 0;
}