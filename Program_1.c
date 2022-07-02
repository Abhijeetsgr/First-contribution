#include<stdio.h>

int main(){
//given character is digit or not

    char ch;
    printf("Enter your character = ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("Given digit is in lowercase character");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Given digit is in UPPERCASE character");
    }
    else{
        printf("Given digit is in NOT in character");
    }


    return 0;
}