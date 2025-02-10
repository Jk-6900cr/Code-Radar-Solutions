#include <stdio.h>
int main(){
    int a;
    scanf("%a",&a);
    int count=0;
    int bits=sizeof(int);
    for(int i=0;i<bits;i++){
        if((a&1)==0){
            count+=1;
            a=(a>>1)&1;
        }
        else{
            break;
        }
    }
    printf("%d",count);
}