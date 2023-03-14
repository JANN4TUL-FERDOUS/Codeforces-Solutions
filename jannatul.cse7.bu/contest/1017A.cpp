#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1,s2;
    cin>>n;
    int x[n],j=0;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        x[i]=a+b+c+d;
        if(i==0) s1=a+b+c+d;
    }
    sort(x,x+n);
    for(int i=n-1;i>=0;i--){
        if(x[i]==s1) {
            s2=n-i;
            break;
        }
    }
    cout<<s2;
    return 0;
}