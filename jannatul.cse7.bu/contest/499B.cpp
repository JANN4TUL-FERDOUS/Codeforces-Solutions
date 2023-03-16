#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,m,i;
    map<string,string>x;
    cin>>n>>m;
    string a,b;
    for(i=0;i<m;i++){
        cin>>a>>b;
        if(a.length()>b.length()) x[a]=b;
        else x[a]=a;
    }
    for(i=0;i<n;i++){
        string a;
        cin>>a;
        cout<<x[a]<<" ";
    }
    return 0;
}