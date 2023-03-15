#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,s;
    cin>>t;
    while(t--){
        int x;
        s=-1;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
           if(b[i]==a[n-1]){
                if(i>0 && b[i-1]!=a[n-1]) {
                    s=i+1;
                    break;
                }
                else if(i<n-1 && b[i+1]!=a[n-1]){
                    s=i+1;
                    break;
                }

            }
        }
        cout<<s<<endl;

    }
    return 0;
}