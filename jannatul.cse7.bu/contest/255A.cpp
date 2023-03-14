#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s2=0,s3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%3==0) s1+=a[i];
        else if(i%3==1) s2+=a[i];
        else s3+=a[i];
    }
    if(s1>=s2 && s1>=s3) cout<<"chest\n";
    else if(s2>=s3 && s2>=s1) cout<<"biceps\n";
    else cout<<"back\n";
    return 0;
}