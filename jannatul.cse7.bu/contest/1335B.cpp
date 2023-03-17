#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,i;
        cin>>n>>a>>b;
        int c[n];
        for(i=0;i<n;i++) cout<<char('a'+i%b);
        cout<<endl;
    }
    return 0;
}