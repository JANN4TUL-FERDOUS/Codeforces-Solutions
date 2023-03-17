#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<a[i/2];
            }
            else{
                j++;
                cout<<" "<<a[n-j]<<" ";
            }
        }
        cout<<endl;;
    }
    return 0;
}