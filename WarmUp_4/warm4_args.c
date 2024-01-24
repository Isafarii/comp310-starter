#include <stdio.h>
int main(){
    //Make string 'hello'
    char str[] = "hello";

    //already array, iterate?
    
    //for loop up to strArray length, if i is less than j, go on; subtract from j
    int i;
    int size = sizeof(str)-1; //right before null term
    for (i = size-1; i>=0;i--){ 
        printf("%c",str[i]);
    }
}