#include<stdio.h>
int main()
{
    int num1, num2, i, big, small, lcm;
    printf("Vai 2 ta number den/r/n ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        big = num1;
        small = num2;
    }
    else{
        big = num2;
        small = num1;
    }


    for(i = 1;;i++){
        lcm = big*i;
        if(lcm%small == 0){
            printf("LCM of %d and %d is %d\r\n", big, small, lcm);
            break;
        }
    }

}
