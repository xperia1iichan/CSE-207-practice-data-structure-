#include <stdio.h>
#include "stack.h"

int main() {
    Stack* myStack = createStack();

    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);

    int value;
    if (stackTop(myStack, &value))
        printf("Top of stack: %d\n", value);

    printf("Popping stack:\n");
    while (!isEmpty(myStack)) {
        pop(myStack, &value);
        printf("%d\n", value);
    }

    destroyStack(myStack);
    return 0;
}
