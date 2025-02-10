#include <stdio.h>
int main(){
    int a;
    scanf("%a",&a);
    int count=0;
    while((a&1)==0){
        a>>=1;
  
        count+=1;
        
    }
    printf("%d",count);
}