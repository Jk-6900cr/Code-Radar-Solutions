#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for(int j=2; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
}