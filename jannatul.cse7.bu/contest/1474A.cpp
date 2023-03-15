#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char a[n],b[n];
        int i,j=0;
        cin>>a;
        b[j++]='1';
        cout<<b[0];
        for(i=1;i<n;i++){
           if(a[i-1]+b[i-1]==a[i]+'1') b[j++]='0';
           else b[j++]='1';
           cout<<b[i];
        }
        cout<<endl;
    }
    return 0;
}