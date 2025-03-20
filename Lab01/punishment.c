#include <stdio.h>

int main(int argc, char **argv[]) {
    int rep;
    int typo;
    
    printf("Enter the repetition count for the punishment phrase: ");
    scanf("%d", &rep);

    while(rep < 1) {
        printf("You entered an invalid value for the repetition count! Please re-enter: ");
        scanf("%d", &rep);

    }

    printf("\nEnter the line where you want to insert the typo: ");
    scanf("%d", &typo);

    while(typo < 1 || typo > rep) {
        printf("You entered an invalid value for the typo placement! Please re-enter: ");
        scanf("%d", &typo);

    }

    printf("\n");

    for (int i = 1; i <= rep; i++) {
        if (typo == i) {
            printf("Cading wiht is C avesone!\n");
            
        } else {
            printf("Coding with C is awesome!\n");
        }
    }


    return 0;
}