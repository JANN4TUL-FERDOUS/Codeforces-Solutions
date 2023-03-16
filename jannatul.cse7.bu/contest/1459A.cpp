#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(i=0;i<n;i++){
            if(a[i]>b[i]) s1++;
            else if(a[i]<b[i]) s2++;
        }
        if(s1>s2) cout<<"RED\n";
        else if(s1<s2) cout<<"BLUE\n";
        else cout<<"EQUAL\n";
    }
    return 0;
}