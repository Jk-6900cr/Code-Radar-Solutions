#include<stdio.h>
#include<math.h>


int isPrime(int n){
    if(n<2)
    return 0;
    for (int i=2;i<sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int t;
    
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));

    }
    return 0;
}