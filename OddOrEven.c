#include<stdio.h>
int main()
{
    int num;
    printf("Vai akta numebr den \r\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("The number %d is even number", num);
    }else {
        printf("The number %d is odd number", num);
    }
    return 0;
}
