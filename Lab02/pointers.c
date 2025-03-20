#include <stdio.h>

int main() {
    int x, y, *px, *py;
    int arr[10];

    x = 1;
    y = 1;
    arr[0] = 1;
    int *parr = arr;

    px = &x;
    py = &y;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(parr + i));
        printf("%p\n", &*(parr + i));
    }

    printf("\nValue of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of arr[0]: %d\n\n", arr[0]);

    printf("Memory address of x: %p\n", &x);
    printf("Memory address of y: %p\n", &y);
    printf("Memory address of arr[0]: %p\n\n", &arr[0]);

    printf("Value of px: %d\n", *px);
    printf("Value of py: %d\n", *py);
    printf("Memory address of px: %p\n", &*px);
    printf("Memory address of py: %p\n", &*py);

    return 0;
}
