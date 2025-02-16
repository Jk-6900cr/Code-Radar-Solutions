#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    for(int i=2;i<2;i++){
        if(n%i==0){
            printf("Not Prime");
        }
    }
    printf("Prime");
}
    
