#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[3]={0},x,s=0,s1=0;
        for(i=0;i<n;i++){
            cin>>x;
            a[x%3]++;
        }
        while(a[0]!=a[1] || a[1]!=a[2] || a[0]!=a[2]){
            s++;
            if(a[0]>=a[1] && a[0]>=a[2]){
                a[0]--;a[1]++;
            }
            else if(a[1]>=a[0] && a[1]>=a[2]){
                a[1]--;a[2]++;
            }
            else if (a[2]>=a[0] && a[2]>=a[1]){
                a[2]--;a[0]++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}