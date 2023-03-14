#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,i,t;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> t;
        if(t%2==0) cout<<t/2-1<<endl;
        else cout << t/2<<endl;

    }
    return 0;
}