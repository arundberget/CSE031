#include <stdio.h>
#include <stdlib.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	// Insert code here

    printf("Value of head: %p\n", (void*) head);
    printf("Address of head variable: %p\n", (void*)&head);
    printf("Value of iValue: %d\n", head->iValue);
    printf("Value of fValue: %.2f\n", head->fValue);
    printf("Address pointed to by next: %p\n", (void*) head->next);
    printf("Address of next pointer: %p\n", (void*)&(head->next));

    free(head);
	
	return 0;
}