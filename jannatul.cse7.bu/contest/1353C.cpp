#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n,s=0,i=1;
        cin>>n;
        for(i=1;i<=n/2;i++)
            s+=i*i;
        cout<<s*8<<endl;

    }
    return 0;
}