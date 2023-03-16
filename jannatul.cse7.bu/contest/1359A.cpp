#include<iostream>
using namespace std;
int main(){
    int t,n,m,k,s;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(n/k>=m) cout<<m<<endl;
        else{
            int x=n/k,y=(m-x+k-2)/(k-1);
            if(y>=x) cout<<"0\n";
            else cout<<x-y<<endl;
        }
    }
    return 0;
}