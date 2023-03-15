#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t,i,s=0,x=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%n==0){
            s/=n;
            for(i=0;i<n;i++){
                if(a[i]>s) x++;
            }
            cout<<x<<endl;
        }
        else cout<<"-1\n";
    }
    return 0;
}