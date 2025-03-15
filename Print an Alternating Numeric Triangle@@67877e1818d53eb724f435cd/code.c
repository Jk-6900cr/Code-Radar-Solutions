#include <stdio.h>
void alternating_numeric_triangle(int N){
    for(int i=1; i<=N; i++){
        int start = (i%2==0)? 0:1;
        for (int j =0; j<i; j++){
            printf("%d",(start+j)%2);
            if(j !=i-1)
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    alternating_numeric_triangle(N);
}