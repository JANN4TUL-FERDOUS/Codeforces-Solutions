#include<iostream>
using namespace std;
int main(){
    int t;
    long long a,s;
    cin>>t;
    while(t--){
        s=0;
        cin>>a;
        if(a<2050 || a%2050!=0) cout<<"-1\n";
        else{
            a/=2050;
            while(a>0){
                s+=a%10;
                a/=10;
            }
            cout<<s<<endl;


        }
    }
    return 0;
}