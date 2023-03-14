#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>> t;
    while(t--){
        cin>> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        sort(a,a+n);
        int min=1000;
        for(int i=1;i<n;i++){
            if(min>a[i]-a[i-1]) min=a[i]-a[i-1];
        }
        cout<<min<<endl;
    }
    return 0;
}