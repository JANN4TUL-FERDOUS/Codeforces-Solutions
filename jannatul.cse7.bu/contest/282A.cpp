#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b=0;
    string a;
    cin >> n;
    while(n--){

        cin>>a;

        if(a[1]=='+')
            b++;
        else if(a[1]=='-')
            b--;
    }
    cout << b;
    return 0;
}