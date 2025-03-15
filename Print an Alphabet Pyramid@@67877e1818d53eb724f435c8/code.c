#include <stdio.h>
void alphabet_pyramid(int N){
    char alphabet = 'A';
    for (int i=0;i<N;i++){
        for (int j=0;j<=1;j++){
            printf("%c",'A' + j);
            if(j!=i)
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    alphabet_pyramid(N);
}