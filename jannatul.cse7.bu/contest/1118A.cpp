#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,s=0;
        long long l;
        cin>>l>>a>>b;
        if(l%2!=0) s=a;
        cout<<min(l*a,(l/2)*b+s)<<endl;
    }
    return 0;
}