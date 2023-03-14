#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,s1=0;
        cin>>n;
        cout<<"2\n";
        if(n==2) cout<<"2 1\n";
        else{
            cout<<n<<" "<<n-2<<endl;
            s=n-1;
            for(i=n-1;i>0;i--){
                if(i==n-2)continue;
                cout<<s<<" "<<i<<endl;
                s=(s+i)/2;
            }
        }
    }
    return 0;
}