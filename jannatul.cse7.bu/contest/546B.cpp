#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s1=0,s2=0,s=0;
    cin>>n;
    int a[n],b[2*n+1]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    int j=0;
    for(i=1;i<=n;i++){
        if(b[i]>1){
            j=i+1;
            while(b[i]!=1){
                if(b[j]==0){
                    s+=j-i;
                    b[j]=1;
                    b[i]--;
                    j++;
                }
                else j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}