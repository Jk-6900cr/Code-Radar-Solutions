#include<stdio.h>
void printNP(int N){
    for (int i=1;i<=N;i++){
        for(int j=1; j<=N-i ; j++){
            printf(" ");
        }
        for (int k=1; k<=i; k++){
            printf("%d",k);
            if(k<i){
                printf(" ");
            }
        }printf("\n");
    }
}
int main(){
    int N;
    printNP(N);
}