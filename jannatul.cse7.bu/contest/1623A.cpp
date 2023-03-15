#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j,s=0,x1,x2,y1,y2,x=1,y=1;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        while(1){
            if(x1==x2 || y1==y2) break;
            s++;
            if(x1==n) x=-1;
            if(y1==m) y=-1;
            x1+=x;
            y1+=y;
        }
        cout<<s<<endl;
    }
    return 0;
}