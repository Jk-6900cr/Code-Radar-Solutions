#include <stdio.h>
int  main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int upd_num = a ^(1<<b);
    printf("%d",upd_num);
}