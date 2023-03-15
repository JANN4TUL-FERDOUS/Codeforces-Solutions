#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],s=0;
        for(i=0;i<n;i++) {
            cin>> a[i];
        }
        if(n==1) cout<<"0\n";
        else{
            int b[1500],k=0;
            s=0;
            for(i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]!=a[j]) {
                        b[k]=abs(a[i]-a[j]);
                        k++;
                    }
                }
            }
            sort(b,b+k);
            for(i=0;i<k-1;i++){
                if(b[i]!=b[i+1]) s++;
            }
            if(b[k-1]!=b[k-2]) s++;
            cout<<s<<endl;
        }
    }
    return 0;
}