#include<stdio.h>
void printNumberTriangle(int N){
    for (int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%d", j);
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d", &N);
    printNumberTriangle(N);
}