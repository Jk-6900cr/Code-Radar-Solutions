#include<stdio.h>
void printDiamond(int N){
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=N-1;i>=1; i--){
        for (int j = 1; j<=N-i; j++){
            printf(" ");
        }
        for (int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printDiamond(N);
}