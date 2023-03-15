#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=1,i,j,s1=0,s2=0,k;
        cin>>n>>k;
        string a;
        cin>>a;
        while(k--){
            string b;
            b=a;
            reverse(b.begin(),b.end());
            if(b==a) break;
            else {
                s++;
                a+=b;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}