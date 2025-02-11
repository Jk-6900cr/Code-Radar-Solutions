#include<stdio.h>
int count_zeros(int num){
    int count =0;
    for (int i=31;i>=0;i--){
        if ((num>>i)&1)
        break;
        count++;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n", count_zeros(num));
}