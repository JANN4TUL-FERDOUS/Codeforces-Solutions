#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],x=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-2;i++){
            if(a[i]!=a[i+1] && a[i]!=a[i+2]){
                x=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(x==0){
            if(a[0]==a[n-2]) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
    }
    return 0;
}