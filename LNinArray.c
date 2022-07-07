#include<stdio.h>

int printLargeN(int numbers[], int size);

int main(){

    int numbers[10] = {7,1,8,3,9,2,6};
    int size;

    printLargeN(numbers, 10);

    return 0;
}

int printLargeN(int numbers[], int n){

    int firstV;
    int count = 0;

    for(int i = 0; i < n; i++){
        firstV = numbers[i];
        if(count < numbers[i]){
            count = numbers[i];
        }
    }
    printf("Largest number in Array is = %d", count);
}