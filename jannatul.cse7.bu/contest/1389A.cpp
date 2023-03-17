#include<iostream>
using namespace std;
int main(){
    long t;
    long l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(l*2 >r){
           cout<<"-1 "<<"-1\n";
        }
        else
        cout<<l<<" "<<2*l<<endl;
    }

    return 0;
}