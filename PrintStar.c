#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Vai akta numebr den, \r\n ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++){

        // Printing space
        for(j = 1; j <= n-i; j++){
            printf(" ");
        }

        // Printing star
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }

        // Printing new line
        printf("\r\n");
    }
    return 0;
}
