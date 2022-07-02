#include<stdio.h>
#include<math.h>

int printPower(int n);

int main(){

    int n;

    printf("Enter your number = ");
    scanf("%d", &n);

    printPower(n);

    return 0;
}

int printPower(int n){
    double p;

    p = pow(n, 2);

    printf("\nSquare of your number is = %f", p);
}