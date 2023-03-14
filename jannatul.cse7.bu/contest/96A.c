#include<stdio.h>
#include<string.h>
int main(){
    int i,l,a;
    char c[100];
    scanf("%s",c);
    l=strlen(c);
    a=1;
    for(i=0;i<l;i++){
        if(c[i]==c[i+1]){
            a++;

            if(a==7){
                printf("YES\n");
                return 0;
            }
        }
        else a=1;
    }
    printf("NO\n");
    return 0;
}