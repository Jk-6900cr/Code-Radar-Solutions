#include<stdio.h>
int count_zeros(int num){
    int count = 0;
    while(num>0 && (num&1)==0){
        count++;
        num>>=1;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",count_zeros(num));
}