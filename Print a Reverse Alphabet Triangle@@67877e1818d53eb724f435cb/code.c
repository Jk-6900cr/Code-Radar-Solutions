#include <stdio.h>
void reverse_alphabet_triangle(int N){
    for(int i=N; i>=1; i--){
        for (int j =0; j<i; j++){
            printf("%c",'A'+j);
            if(j !=i-1)
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    reverse_alphabet_triangle(N);
}