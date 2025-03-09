#include<stdio.h>
void printNumberTriangle(int N){
    for (int i=1;i<=N;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c",ch);
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