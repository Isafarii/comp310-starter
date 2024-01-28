#include <stdio.h>
/*Objective: Write a program to create a file, 
 write some data into it, 
 then read the data from the file.
 */
int main(){

const char* filename = "example.txt";
//create a file
FILE* fp = fopen(filename, "w+");
//if success, else error and return 1
//

if(!fp){
    perror("No file");
    return 1;
}

   //write data into the file fp
fputs("Hello, world!\n", fp);
//beginning
rewind(fp);

int br;
//read and put out contents to console
while((br = fgetc(fp)) != EOF){
    putchar(br);
}
fclose(fp);
remove(filename);
}

