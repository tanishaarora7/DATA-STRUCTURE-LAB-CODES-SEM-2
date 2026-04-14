Value Added Statement 2
#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int match(char a, char b) {
    if (a == '(' && b == ')') return 1;
    if (a == '{' && b == '}') return 1;
    if (a == '[' && b == ']') return 1;
    return 0;
}

int isBalanced(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            push(s[i]);
        else {
            char x = pop();
            if (!match(x, s[i]))
                return 0;
        }
    }
    return top == -1;
}

int main() {
    char s[100];
    scanf("%s", s);
printf("Tanisha Arora, 25070521116, B2");
    
    
    

    if (isBalanced(s))
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}