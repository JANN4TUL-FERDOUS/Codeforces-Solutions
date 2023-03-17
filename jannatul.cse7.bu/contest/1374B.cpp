#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s=0;
        cin>>n;
        while(n%6==0){
            s++;
            n/=6;
        }
        while(n%3==0){
            n/=3;
            s+=2;
        }
        if(n==1) cout<<s<<endl;
        else cout<<"-1\n";
    }
    return 0;
}