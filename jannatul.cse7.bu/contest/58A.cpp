#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b="hello";
    int j=0,c=0;
    cin >>a;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[j]){
            j++;
            c++;
        }
    }
    if(c==5) cout << "YES\n";
    else cout<<"NO\n";
    return 0;
}