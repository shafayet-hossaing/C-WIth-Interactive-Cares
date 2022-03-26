#include<stdio.h>
int main()
{
    int myArr[] = {1,2,3,4,5};
    int i;
    int n = sizeof(myArr)/sizeof(myArr[0]);

    for(i = 0; i<n; i++){
        printf("myArr[%d] = %d\r\n",i, myArr[i]);
    }
    return 0;
}
