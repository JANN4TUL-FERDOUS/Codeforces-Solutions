#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s1=0,s2=0,s3=0,x=0;
        cin>>n;
        s1=(n/10)*25;
        if(n%10>0 ){
            if(s1>0) {
                s1-=25;
                x=10;
            }
            x+=n%10;
            if(x==8 || x==7) s1+=20;
            else if(x==9 || x==10) s1+=25;
            else if(x<=12) s1+=((x+5)/6)*15;
            else if(x<=14) s1+=35;
            else if(x<=16) s1+=40;
            else if(x<=18) s1+=45;
            else s1+=50;
        }
        cout<<s1<<endl;

    }
    return 0;
}