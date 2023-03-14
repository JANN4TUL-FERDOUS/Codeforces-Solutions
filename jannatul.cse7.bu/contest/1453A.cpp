#include<iostream>
using namespace std;
int main(){
    int t,n,m,i,j;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n],b[m],s=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];
        int x=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j]) s++;
                if(b[j]>a[i]){
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}