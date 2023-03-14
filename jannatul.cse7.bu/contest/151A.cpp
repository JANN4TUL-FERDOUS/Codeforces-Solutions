#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    int x;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=min((k*l/nl)/n,c*d/n);
    x=min(x,(p/np)/n);
    cout<<x<<endl;
    return 0;
}