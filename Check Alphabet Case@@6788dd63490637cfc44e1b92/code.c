#include<stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha>=a && alpha<=z){
        printf("Uppercase");
    }
    else if(alpha>=A && alpha<=Z){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
}