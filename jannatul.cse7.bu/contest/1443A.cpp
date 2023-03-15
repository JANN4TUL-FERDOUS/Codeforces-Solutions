#include<iostream>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        i=n*4;
        while(n--){
            cout<<i<<" ";
            i-=2;
        }
        cout<<endl;
    }
    return 0;
}