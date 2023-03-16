#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,s1=1,i;
        cin>>n>>a>>b;
        char x[n];
        cin>>x;
        for(i=1;i<n;i++){
            if(x[i]!=x[i-1]) s1++;
        }
        cout<<a*n+max(b*n,(s1/2+1)*b)<<endl;
    }
    return 0;
}