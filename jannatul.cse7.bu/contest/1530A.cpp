#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        int s=0;
        while(a>0){
            if((a%10)>s) s=a%10;
            a/=10;
        }
        if(a>s) s=a;
        cout<<s<<endl;
    }
    return 0;
}