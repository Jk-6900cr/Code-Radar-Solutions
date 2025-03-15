#include <stdio.h>
void alphabet_pyramid(int N){
    char alphabet = 'A';
    for (int i=0;i<N;i++){
        for (j=0;j<=1;j++){
            printf("%c",'A' + j);
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    alphabet_pyramid(N);
}