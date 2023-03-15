#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,s1=1,s2=0;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++){
            cin>>a[i];
            if(i>1 && a[i]>a[i-1]) s1++;
        }
        if(s1==n) cout<<"0\n";
        else{
           while(1){
                s1=0;
                s++;
                if(s%2==0) i=2;
                else i=1;
                for( ;i<n;i+=2){
                    if(a[i]>a[i+1]) swap(a[i],a[i+1]);
                }
                for(i=1;i<=n;i++){
                    if(a[i]==i) s1++;
                }
                if(s1==n) break;
           }
           cout<<s<<endl;

        }

    }
    return 0;
}