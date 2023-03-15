#include<iostream>
using namespace std;
int main(){
    int t,n,d;
    int s1=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>t;
        s1+=t;
    }
    s1+=(n-1)*10;
    if(s1>d) cout<<"-1\n";
    else   cout<<(n-1)*2+(d-s1)/5<<endl;
    return 0;
}