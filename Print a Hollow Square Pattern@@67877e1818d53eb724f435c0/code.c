#include<stdio.h>
int main{
    int n;
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
        for(int j=i; j<=i+1; j++){
            printf("*");
        }
        printf(" ");
    }
}