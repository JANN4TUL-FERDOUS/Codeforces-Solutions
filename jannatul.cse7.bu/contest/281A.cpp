#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[1000];
    cin >>a;

        if(a[0]>91){
            a[0]-=32;
        }
    cout <<a <<endl;
    return 0;
}