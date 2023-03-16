#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s=0;
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        int a[4],i=0,j=0;
        while(n>0){
            i++;
            if(n%10!=0){
                s++;
                int x=i-1,y=n%10;
                while(x--) y*=10;
                a[j++]=y;
            }
            n/=10;
        }
        cout<<s<<endl;
        for(i=0;i<j;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}