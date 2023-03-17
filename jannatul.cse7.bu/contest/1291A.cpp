#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        string a,b;
        cin>>n>>a;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0) {
                s++;
                if(s==1) b[0]=a[i];
                else b[1]=a[i];
            }
            if(s==2) break;
        }
        if(s==2) cout<<b[0]<<b[1];
        else cout<<"-1";
        cout<<endl;
    }
    return 0;
}