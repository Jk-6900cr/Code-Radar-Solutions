#include<stdio.h>
void printBinary(int num){
    int started = 0;
    for (int i=31; i>=0;i--){
        int bit = (num>>i)&1;
        if (bit==1){
            started =1;
        }
        if (started){
            printf("%d",bit);
        }
    }
    printf("\n");
}
int main(){
    int num;
    scanf("%d",&num);
    printBinary(num);
    
}