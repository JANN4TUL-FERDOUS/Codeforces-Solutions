#include<iostream>
using namespace std;
int main(){
    int n,s1=1005,s2=0,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(b<s1) {
            s1=b;
            s2+=b*a;
        }
        else s2+=s1*a;
    }
    cout<<s2<<endl;
    return 0;
}