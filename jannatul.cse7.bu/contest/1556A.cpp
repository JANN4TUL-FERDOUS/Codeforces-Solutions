#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x%2==y%2){
            if(x==0 && y==0) cout<<"0\n";
            else if(x==0 || y==0) cout<<"2\n";
            else if(x==y) {
                if(x<0) cout<<"-1\n";
                else cout<<"1\n";
            }
            else {
                if(x>y) swap(x,y);
                if(x<0 && y>0) cout<<"3\n";
                else{
                    if(y-x==1) cout<<"1\n";
                    else cout<<"2\n";
                }
            }
        }
        else cout<<"-1\n";
    }
    return 0;
}