#include<stdio.h>
int main(){
    int k,n,w,i,a=0;
    scanf("%d %d %d",&k,&n,&w);
    for( i=1;i<=w;i++){

       a+=i*k;
    }
    if(n>=a) printf("0\n");
    else printf("%d",a-n);
    return 0;
}