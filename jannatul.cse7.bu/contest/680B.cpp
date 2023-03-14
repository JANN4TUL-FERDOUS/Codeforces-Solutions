#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n>>a;
    int x[n],i,s=0;
    for(i=1;i<=n;i++) cin>>x[i];
    if(x[a]==1) s++;
    for(i=1;i<=n;i++){
        if(x[i]==1){
            if(i<a){
                if(a-i+a<=n && x[2*a-i]==0) continue;
                else s++;
            }
             else if(i>a){
                if(a-(i-a)>=0 && x[a-(i-a)]==0) continue;
                else s++;
            }

        }
    }
    cout<<s<<endl;
    return 0;
}