#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,j,s1=0,s2=0,a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        for(i=0;i<n;i++){
            if(a[i]>b[i]) s1+=a[i]-b[i];
            else if(a[i]<b[i]) s2+=b[i]-a[i];
        }
        if(s1!=s2) cout<<"-1\n";
        else{
            cout<<s1<<endl;
            for(i=0;i<n;i++){
                 if(a[i]>b[i]){
                    for(j=0;j<n;j++){
                        if(a[i]==b[i]) break;
                        if(a[j]<b[j]){
                            int x=min(abs(a[i]-b[i]),abs(a[j]-b[j]));
                            a[i]-=x;
                            a[j]+=x;
                            while(x--){
                                cout<<i+1<<" "<<j+1<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}