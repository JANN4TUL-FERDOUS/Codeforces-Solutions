#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s=0,i;
    cin>>n>>k;
    string a;
    cin>>a;
    for(i=0;i<n;i++){
        if(k==0) break;
        if(i==0){
            int x=a[i]-'0';
            if(n==1 && x>0) a[i]='0',k--;
            else if(n>1 && x>1)a[i]='1',k--;
        }
        else if(a[i]!='0'){
            k--;
            a[i]='0';
        }
    }
    cout<<a<<endl;
    return 0;
}