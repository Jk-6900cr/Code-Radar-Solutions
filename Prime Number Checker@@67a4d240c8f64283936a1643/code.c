#include<stdio.h>
#include<math.h>

int main(){
    int t, num;
    scanf("%d",&t);
    for (int i =0; i<t;i++){
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
}
int isPrime(int n){
    if(n<2)
    return 0;
    for (int i=2;i<sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
