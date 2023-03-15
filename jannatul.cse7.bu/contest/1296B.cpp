#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,s2,s1;
    cin>>t;
    while(t--){
        cin>>n;
        s1=n;
        while(n/10>0){
            s2=n/10;
            n=n%10+s2;
            s1+=s2;
        }
        cout<<s1<<endl;
    }
    return 0;
}