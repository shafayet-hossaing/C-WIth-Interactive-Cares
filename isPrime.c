#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num, i;
    bool isPrime = false;
    printf("Please give me a number to check if the number is prime number or not \r\n");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++){
        if(num%i == 0){
            isPrime = false;
            printf("The number %d is not prime\r\n", num);
            break;
        }
        else{
            isPrime = true;
        }
    }
    if(isPrime == true){
        printf("The number %d is prime\r\n", num);
    }
    return 0;
}
