#include<stdio.h>
int main()
{
    int myArr[] = {15,2,32,4,5};
    int i, j , temp;
    int n = sizeof(myArr)/sizeof(myArr[0]);


    // bouble sort
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(myArr[j]>myArr[j+1]){
                temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
            }
        }
    }



    for(i = 0; i<n; i++){
        printf("myArr[%d] = %d\r\n",i, myArr[i]);
    }
    return 0;
}

