#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%a==0 && a%1==0 && (a%2!=0 || a%3!=0 || a%5!=0)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}