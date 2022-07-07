#include<stdio.h>

int main(){

    int n;
    int count = 0;

    printf("Enter your number = ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count ++;
        }
    }

    if(count == 2){
        printf("Given number is Prime number");
    }
    else{
        printf("Given number is NOT Prime number");
    }

    return 0;
}