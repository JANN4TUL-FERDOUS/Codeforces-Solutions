#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s=0,n,m,s1,s2=0;
        cin>>n>>m;
        s1=n/m;
        int a[10],i;
        for(i=1;i<=10;i++) {
            a[i]=(m*i)%10;
            s2+=a[i];
        }
        s+=(s1/10)*s2;;
        s1%=10;
        for(i=1;i<=s1;i++) s+=a[i];
        cout<<s<<endl;
    }
    return 0;
}