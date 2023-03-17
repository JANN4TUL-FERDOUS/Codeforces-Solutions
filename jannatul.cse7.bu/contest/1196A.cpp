#include<iostream>
using namespace std;
int main(){
    int t;
    long long a,b,c,s;
    cin>>t;
    while(t--){
        cin>> a>>b>>c;
        s=a+b+c;
        if(s%2==0) cout<<s/2<<endl;
        else cout<<(s-1)/2<<endl;
    }
    return 0;
}