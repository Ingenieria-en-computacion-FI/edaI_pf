#include <stdlib.h>

#include "stack.h"

typedef struct Node {

    int value;

    struct Node* next;

} Node;

struct Stack {

    Node* top;

};

Stack* stack_create() {

    Stack* stack = malloc(sizeof(Stack));

    stack->top = NULL;

    return stack;
}

void stack_push(
    Stack* stack,
    int value
) {

    /*
    IMPLEMENTAR
    */
}

int stack_pop(
    Stack* stack
) {

    /*
    IMPLEMENTAR
    */

    return -1;
}

int stack_peek(
    Stack* stack
) {

    return -1;
}

int stack_is_empty(
    Stack* stack
) {

    return 1;
}

void stack_destroy(
    Stack* stack
) {

    free(stack);
}
