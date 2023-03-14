#include<iostream>
using namespace std;
int main(){
    int t,i,j,s;
    cin>>t;
    while(t--){
        cin>>i>>j;
        s=i*j;
        if(s%2==0) cout<<s/2<<endl;
        else cout<<s/2+1<<endl;
    }
    return 0;
}