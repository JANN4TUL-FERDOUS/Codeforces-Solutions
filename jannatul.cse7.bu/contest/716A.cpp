#include<iostream>
using namespace std;
int main(){
    int n,s1=1,s2=0,i;
    long long c;
    cin>>n>>c;
    int a[n];
    for(i=0;i<n;i++)  cin>>a[i];
    for(i=1;i<n;i++){
        if(a[i]-a[i-1]>c) s1=1;
        else s1++;
    }
    cout<<s1<<endl;
    return 0;
}