#include<iostream>
using namespace std;
int main(){
    int n,i,x=0,y=0;
    string a;
    cin >> n >> a;
    for(i=0;i<n;i++){
        if(a[i]=='A') x++;
        else if(a[i]=='D') y++;
    }
    if(x>y) cout <<"Anton\n";
    else if(x<y) cout <<"Danik\n";
    else cout <<"Friendship\n";
    return 0;
}