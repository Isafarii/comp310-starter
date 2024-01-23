#include <stdio.h>
#include <stdlib.h>

int main(){
//create two ints
int num1;
int num2;
char chose;

//ask user to type num, once and twice
printf("Type number 1: \n");

//get save
scanf("%d",&num1);
//nxt one
printf("Type number 2: \n");
scanf("%d",&num2);

//Ask which action
printf("Which action, mult,add,sub,div: \n");
scanf(" %c", &chose);


switch (chose) {
    case '+':
        // Code to execute when expression equals value1
        printf("Num is: %d\n", num1+num2);
        break;
    case '-':
        // Code to execute when expression equals value2
        printf("Num is: %d\n", num1-num2);
        break;
    case '*':
        // Code to execute when expression equals value1
        printf("Num is: %d\n", num1*num2);
        break;
    case '/':
        // Code to execute when expression equals value1
        printf("Num is: %d\n", num1/num2);
        break;
    default:
        printf("Invalid.\n");
}

}
