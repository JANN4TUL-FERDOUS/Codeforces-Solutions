#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,s1=0,s2=0;
        cin>>a>>b;
        if(a==b) cout<<"0 0\n";
        else{
            s1=abs(a-b);
            cout<<s1<<" "<<min(a%s1,s1-(a%s1))<<endl;
        }
    }
    return 0;
}