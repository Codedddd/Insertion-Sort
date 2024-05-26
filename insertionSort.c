#include <stdio.h>

void insertionSort(int array[] , int arrayLength) {
    for (int i = 1; i < arrayLength; i++) {
        int pointer = array[i];
        int index = i - 1;
        while (index >= 0 && array[index] > pointer) {
            array[index + 1] = array[index];
            index = index - 1;
        }
        array[index + 1] = pointer;
    }
}

void printArray(int array[] , int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        printf("%d\n" , array[i]);
    }
    getchar();
}

int main() {
    int array[] = {12 , 65 , 78 , 43 , 3 , 6 , 1 , 9};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    insertionSort(array , arrayLength);
    printArray(array , arrayLength);
    return 0;
}