#include<iostream>
using namespace std;
int main(){
    int a,n,b,c,s1=0,s2=0,s3=0;
    cin >> n;
    while(n--){
        cin >> a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    }
    if(s1==0&& s2==0&&s3==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}