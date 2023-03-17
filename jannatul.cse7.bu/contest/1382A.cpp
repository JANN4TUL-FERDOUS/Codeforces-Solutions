#include<iostream>
using namespace std;
int main(){
    int t,m,n,k,i,j,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n],b[m];
        x=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j]){
                    x++;
                    cout<<"YES\n"<< x<<" "<<a[i]<<endl;
                    break;
                }
            }
            if(x==1) break;
        }
         if(x==0)cout<<"NO\n";
    }
    return 0;
}