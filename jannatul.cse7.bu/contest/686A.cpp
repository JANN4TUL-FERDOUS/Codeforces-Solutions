#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s2=0;
    long long x;
    cin>>n>>x;
    while(n--){
        int a;
        char c;
        cin>>c>>a;
        if(c=='-'){
            if(x<a) s2++;
            else x-=a;
        }
        else x+=a;

    }
    cout<<x<<" "<<s2;
    return 0;
}