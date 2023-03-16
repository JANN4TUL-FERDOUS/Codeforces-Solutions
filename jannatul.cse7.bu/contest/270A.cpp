#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    x=t;
    while(t--){
        int a;
        cin>>a;
        if(a==60|| a==90 || a==108 || a==120 || a==135 || a==140 ||a ==144 || a==150|| a==156 || a==160 ||a==162 || a==165 ||a==168|| a==170 || a==171 || a==172 || a==174 ||a== 175||a==176 || a==177 ||a==178 ||a==179) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}