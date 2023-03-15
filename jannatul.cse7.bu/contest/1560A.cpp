#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,k,s1=0,s2=0,i;
        cin>>k;
        for(i=1;i<k*10;i++){
            if(i%10==3 || i%3==0) continue;
            else s++;
            if(s==k) {
                cout<<i<<endl;
                break;
            }
        }
    }
     return 0;
}