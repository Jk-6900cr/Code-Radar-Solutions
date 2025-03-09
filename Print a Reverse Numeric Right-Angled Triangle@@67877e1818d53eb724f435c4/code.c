#include<stdio.h>
void printReverseNumberTriangle(int N){
    for (int i=N;i>=1;i--){
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
    printReverseNumberTriangle(N);
}