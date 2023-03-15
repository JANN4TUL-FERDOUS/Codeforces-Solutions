#include<iostream>
using namespace std;
int main(){
    int t;
    long long a,b,k,s;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        s=(k/2)*a-(k/2)*b;
        if(k%2!=0) s+=a;
        cout<<s<<endl;
    }
    return 0;
}