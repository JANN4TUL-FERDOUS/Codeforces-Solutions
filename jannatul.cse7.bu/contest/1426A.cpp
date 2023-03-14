#include<iostream>
using namespace std;
int main(){
    int t,n,x,s;
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n<3) cout<<"1\n";
        else{
            n-=2;
            if(n%x==0) cout<<n/x+1<<endl;
            else cout<<n/x+2<<endl;
        }
    }
    return 0;
}