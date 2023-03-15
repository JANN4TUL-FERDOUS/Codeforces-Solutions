#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    unsigned long long l,r,i,s=0;
    cin>>l>>r;
    cout<<"YES\n";
    for(i=l;i<r;i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}