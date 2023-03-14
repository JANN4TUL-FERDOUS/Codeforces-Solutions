#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>> a;
    int n=5;
    while(n--){
        cin>>b;
        if(b[0]==a[0] || b[1]==a[1]){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}