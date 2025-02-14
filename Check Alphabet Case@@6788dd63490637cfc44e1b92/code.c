#include<stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z'){
        printf("Lowercase");
    }
    else if(alpha>='A' && alpha<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
}