#include<iostream>
using namespace std;
int main(){
    int t,h,m,s;
    cin>>t;
    while(t--){
        cin>>h>>m;
        cout<<((23-h)*60+(60-m))<<endl;
    }
    return 0;
}