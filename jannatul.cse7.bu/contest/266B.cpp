#include<iostream>
using namespace std;
int main(){
    int i,n,a;
    char b[100];
    cin >> n>>a;
     cin >> b;
     while(a--){
        for( i=0;i<n;i++){
            if(b[i]=='B' &&b[i+1]=='G'){
                b[i]='G';
                b[i+1]='B';
                i++;
            }
        }
    }
    cout<<b<<endl;
    return 0;
}