#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    s/=(n/2);
    int x=0;
    for(i=0;i<n;i++){
        if(a[i]!=0){
            x++;
            cout<<i+1<<" ";
            for(int j=i+1;j<n;j++){
                if(a[j]==s-a[i]){
                    cout<<j+1<<endl;
                    a[j]=0;a[i]=0;
                    break;
                }
            }
        }
    }
    return 0;
}