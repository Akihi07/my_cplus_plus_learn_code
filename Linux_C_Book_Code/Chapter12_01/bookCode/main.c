#include <stdio.h>

char stack[512];
int top = 0;

void push(char c){
    stack[top] = c;
    top++;
}

char pop(){
    top--;
    return stack[top];
}

int is_empty(){
    return top == 0;
}
int main() {
    push('a');
    push('b');
    push('c');

    while (!is_empty()){
        putchar(pop());
    }
    putchar('\n');
    return 0;
}
