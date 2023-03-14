#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    char c[100];
    cin >>n;

        cin >> c;
        a=0;
        for(int i=0;i<n;i++){
            if(c[i]==c[i+1]){
                a++;
            }
        }
        cout << a <<endl;

    return 0;
}