#include<stdio.h>
int main(){
    char myChar;
    printf("Put a character a to c \r\n ");
    scanf("%c", &myChar);

    switch(myChar){
    case 'a':
        printf("a for apple");
        break;
    case 'b':
        printf("b for ball");
        break;
    case 'c':
        printf("c for cat");
        break;
    default:
        printf("Empty Empty !!");
    }
    return 0;
}
