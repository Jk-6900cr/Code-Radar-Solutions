#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    while((num&1)==0){
        count+=1;
        a>>=1;
    }
    printf("%d",count);
}