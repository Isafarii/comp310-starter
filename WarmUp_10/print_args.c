#include <stdio.h> //equiv of import

#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i=1; i < argc; i++) {
        printf("i=%d argv[%d] = %s\n", i, i, argv[i]);
    }
}
