#include<stdio.h>
int main(){
    int n, isprime=1;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        
    }
    if (isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}
    
