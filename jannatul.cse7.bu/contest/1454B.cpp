#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],s=-1,x;
        for(i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++){
            if(b[i]!=b[i+1] && b[i-1]!=b[i]){
                s=b[i];
                break;
            }
        }
        if(s==-1)
            cout<<"-1\n";
        else{
            for(i=0;i<n;i++){
                if(a[i]==s){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}