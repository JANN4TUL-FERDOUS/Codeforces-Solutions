#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a[3],s=0;
        for(int i=0;i<3;i++) cin>>a[i];
        sort(a,a+3);
        if(a[2]-a[0]<3) cout<<"0\n";
        else{
            if(a[0]==a[1]) a[1]++;
            else if(a[1]==a[2]) a[1]--;
            a[0]++;a[2]--;
            cout<<abs(a[1]-a[0])+abs(a[1]-a[2])+abs(a[0]-a[2])<<endl;
        }
    }
    return 0;
}