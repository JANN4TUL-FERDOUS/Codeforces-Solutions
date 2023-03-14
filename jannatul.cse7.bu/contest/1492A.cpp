#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 ||p%b==0 ||p%c==0) cout<<"0\n";
        else{
            a-=(p%a);
            b-=p%b;
            c-=p%c;
            cout<<min(min(a,b),c)<<endl;
        }
    }
    return 0;
}