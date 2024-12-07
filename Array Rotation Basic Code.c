#include <stdio.h>

int main() {

    int size, steps;

    printf("Enter Array Size: ");
    scanf("%d", &size);

    int array[size], rotateArray[size];

    printf("Enter %d Array Elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array Elements Are: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\nEnter Number Of Steps To Rotate: ");
    scanf("%d", &steps);

    steps = steps % size;

    for (int i = 0; i < size; i++) {
        rotateArray[(i + steps) % size] = array[i];
    }

    printf("Rotated Array Elements Are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", rotateArray[i]);
    }

    return 0;
}
