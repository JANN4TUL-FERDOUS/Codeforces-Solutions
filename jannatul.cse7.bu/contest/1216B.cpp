#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0,s1=0,s2=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    s+=n;
    for(i=n-1;i>=0;i--){
        s+=a[i]*s1;
        s1++;
    }
    cout<<s<<endl;
    for(i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                cout<<j+1<<" ";
                b[j]=0;
                break;
            }
        }
    }
    return 0;
}