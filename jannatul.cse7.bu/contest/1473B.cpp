#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        string a,b,x,y;
        cin>>a>>b;
        x=a;y=b;
        while(a.length()!=b.length()){
            if(a.length()>b.length()) b+=y;
            else if(a.length()<b.length()) a+=x;
        }
        if(a==b) cout<<a<<endl;
        else cout<<"-1\n";
    }
    return 0;
}