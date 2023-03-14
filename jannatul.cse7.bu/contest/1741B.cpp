#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    int l=t;
    char c;
    while(t--){
      int n,i;
      cin>>n;
      if(n==3) cout<<"-1\n";
      else if(n%2==0) {
        for(i=n;i>0;i--) cout<<i<<" ";
        cout<<endl;
      }
      else{
        cout<<n<<" "<<n-1<<" ";
        for(i=1;i<n-1;i++) cout<<i<<" ";
        cout<<endl;
      }
    }

    return 0;
}