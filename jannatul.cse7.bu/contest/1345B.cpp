#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    int a[100000];
    a[1]=2;
    for(i=2; ;i++){
        a[i]=a[i-1]+2*i+(i-1);
        if(a[i]>=1000000000) break;
    }
    int j=i-1;
    while(t--){
        int n,s=0;
        cin>>n;
        if(n<2) cout<<"0\n";
        else {
            for(i=j;i>0;i--){
                while(n>=a[i]){
                    n-=a[i];
                    s++;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}