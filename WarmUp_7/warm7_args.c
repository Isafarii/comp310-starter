#include <stdio.h>

int linearSearch(int arr[], int size, int target);

int main(){
    int array[] = {1,4,7,9,12};
    int target = 9;
    int index = linearSearch(array, sizeof(array)/sizeof(array[0]), target);
if (index != -1) {
    printf("Element found at index: %d\n", index);
} else {
    printf("Element not found\n");
}
int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
        return i;
    }
}
return -1;
}

}