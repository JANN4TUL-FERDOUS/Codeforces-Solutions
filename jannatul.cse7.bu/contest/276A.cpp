#include<iostream>
using namespace std;
int main(){
    long long k,n,a,b,s1,s=-1000000000;
    cin>>n>>k;
    while(n--){
        cin>>a>>b;
        if(b>k){
            s=max(s,a-(b-k));
        }
        else{
            s=max(s,a);
        }
    }
    cout<<s<<endl;
    return 0;
}