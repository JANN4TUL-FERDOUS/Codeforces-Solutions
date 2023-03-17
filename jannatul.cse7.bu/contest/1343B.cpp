#include<iostream>
using namespace std;
int main(){
    long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s1=0,s2=0;
        if(n%4==0){
            cout<<"YES\n";
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                s1+=i;
            }
            for(int i=1;i<n-1;i+=2){
                cout<<i<<" ";
                s2+=i;
            }
            cout<<s1-s2<<endl;
        }
        else cout<<"NO\n";
    }
    return 0;
}