#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,j=0,s=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]!=-1){
            int x=a[i];
            while(x!=-1){
                j++;
                x=a[x];
            }
            if(j>s) s=j;
            j=0;
        }
    }
    cout<<s+1<<endl;
    return 0;
}