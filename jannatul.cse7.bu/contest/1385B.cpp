#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n*=2;
        int a[n],b[n],i,j=0,s=0;
        for(i=0;i<n;i++) cin>>a[i];
        b[j++]=a[0];
        for(i=1;i<n;i++){
            s=0;
            for(int k=0;k<j;k++){
                if(a[i]==b[k]) break;
                else s++;
            }
            if(s==j) b[j++]=a[i];
        }
        for(i=0;i<j;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}