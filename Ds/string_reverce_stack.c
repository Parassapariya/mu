#include <stdio.h>

#include <string.h>

#define MAX 100
int top = -1;
char stack[MAX];
void push(char x) {
  if (top == MAX - 1) {
    printf("Stack overflow\n");
  } else {
    stack[++top] = x;
  }
}
void pop() {
  if (top == -1) {
    printf("Stack underflow\n");
  } else {
    printf("%c", stack[top--]);
  }
}
int main() {
  char str[50];
  int len;
  printf("\n Enter String : ");
  gets(str);
  len = strlen(str);
  for (int i = 0; i < len; i++) {
    push(str[i]);
  }
  for (int i = 0; i < len; i++) {
    pop();
  }
  printf("\n");
  return 0;
}