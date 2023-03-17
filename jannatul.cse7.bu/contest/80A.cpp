#include<iostream>
using namespace std;
int main(){
    int n,m;
    int a[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>n>>m;
    for(int i=0;i<15;i++){
        if(a[i]==n && a[i+1]==m){
            cout<<"YES\n";
            return 0;
        }
        if(a[i]>n) break;
    }
    cout<<"NO\n";
    return 0;
}