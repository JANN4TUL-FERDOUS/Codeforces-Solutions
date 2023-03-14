#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,odd,even;
    cin>> t;
    for(i=0;i<t;i++){
        odd=0;
        even=0;
        cin>> n;
        int a;
        for(int j=0;j<n;j++){
            cin>> a;
            if(a%2!=j%2){
                if(j%2==0) odd++;
                else even++;
            }
        }
        if(odd!=even) cout<<"-1"<<endl;
        else cout<<odd<<endl;
    }
    return 0;
}