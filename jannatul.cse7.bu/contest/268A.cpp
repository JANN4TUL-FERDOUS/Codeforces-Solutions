#include<iostream>
using namespace std;
int main(){
    int n,i,j,s=0;
    cin >> n;
    int a[n],b[n];

    for(i=0;i<n;i++){
        cin >>a[i]>>b[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j &&a[i]==b[j])
                s++;
        }
    }
    cout<< s<<endl;
    return 0;
}