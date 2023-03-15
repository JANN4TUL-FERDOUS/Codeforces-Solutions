#include<iostream>
using namespace std;
int main(){
    int t;
    long long  a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a>=c) cout<<"-1"<<" "<<b;
        else {
            cout<<"1"<<" ";
            if(b*a<=c) cout<<"-1";
            else cout<<b;
        }
        cout<<endl;
    }
    return 0;
}