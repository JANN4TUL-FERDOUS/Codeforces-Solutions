#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s=0,x=0;
        cin>>n;
        while(n!=1){
            if(n%2!=0 && n%3!=0 && n%5!=0){
                x=1;
                break;
            }
            if(n%2==0){
                s++;
                n/=2;
            }
            if(n%3==0){
                s++;
                n=n*2/3;
            }
            if(n%5==0){
                s++;
                n=n*4/5;
            }
        }
        if(x==0) cout<<s<<endl;
        else cout<<"-1\n";
    }
    return 0;
}