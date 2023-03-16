#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2,c1,c2,s=0;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        s=abs(a1-b1)+abs(a2-b2);
        if(a1==b1 && c1==a1 ){
            if((a2>c2  && b2<c2 )|| (a2<c2 && b2>c2)) s+=2;
        }
        else if(a2==b2 && c2==a2 ){
            if((a1>c1 && b1<c1) || (a1<c1 && b1>c1)) s+=2;
        }
        cout<<s<<endl;
    }
    return 0;
}