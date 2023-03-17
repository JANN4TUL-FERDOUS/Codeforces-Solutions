#include<iostream>
using namespace std;
int main(){
    int t,n,i,s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],x,y;
        s=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n-1;i++){
           x=max(a[i],a[i+1]);
           y=min(a[i],a[i+1]);
           while(x>2*y){
                y*=2;
                s++;
           }
        }
        cout<<s<<endl;
    }
    return 0;
}