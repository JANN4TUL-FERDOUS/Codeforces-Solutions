#include<iostream>
using namespace std;
int main(){
    int n,i,s1=1,s2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i]) s1++;
        else{
            if(s2<s1)s2=s1;
            s1=1;
        }
    }
    if(s1>s2) cout<<s1;
    else cout<<s2;
    return 0;
}