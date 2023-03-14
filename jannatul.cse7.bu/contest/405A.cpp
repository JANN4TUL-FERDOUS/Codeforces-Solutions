#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,s[1000];
    cin >> n;
    for(i=0;i<n;i++){
        cin>> s[i];
    }
    sort(s,s+n);
    for(i=0;i<n;i++){
            cout <<s[i]<<" ";
    }
    return 0;
}