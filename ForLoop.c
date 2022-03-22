#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    printf("Put a number : ");
    scanf("%d", &n);
    for(i=0;i<=n;i=i+1){
        sum = sum + i;
    }
    printf("%d\r\n", sum);
    return 0;
}
