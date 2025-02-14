#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&char);
    if (char=='a'|| char=='e'|| char=='i' || char=='o' || char=='u'
        char=='A' || char=='E' || char=='I' || char=='O' || char=='U'){
        printf("Vowel");
    }else if(char>='0' && char<='9'){
        printf("Digit");
    }else if((char>='a' && char<='z') || (char>='A' && char<='Z')){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;
}