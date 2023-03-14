#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=a,y=b,z=c,s1=0,s2=0;
        if(b>c/2) {
            s1+=(c/2)*3;
            b-=c/2;
            if(b/2<a) s1+=(b/2)*3;
            else s1+=3*a;
        }
        else {
            s1+=3*b;
            b=0;
        }
        if(2*x<y){
            s2+=3*x;
            y-=2*x;
            if(2*y<z) s2+=3*y;
            else s2+=(z/2)*3;
        }
        else s2+=(y/2)*3;
        cout<<max(s1,s2)<<endl;
    }
    return 0;
}