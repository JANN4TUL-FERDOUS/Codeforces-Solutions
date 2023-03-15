#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k,x,y;
        cin>>a>>b>>c>>d>>k;
        if(c>a) x=1;
        else{
            x=a/c;
            if(a%c!=0) x++;
        }
        if(d>b) y=1;
        else{
            y=b/d;
            if(b%d!=0) y++;
        }
        if(x+y>k) cout<<"-1\n";
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}