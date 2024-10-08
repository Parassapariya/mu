#include <stdio.h>

#define MAX 100
int st[MAX], top = -1;
void push(int st[], int val);
int pop(int st[]);
int factorial(int n);
int main() {
  int num;
  printf("\n Enter the number to calculate the factorial : ");
  scanf("%d", & num);
  int result = factorial(num);
  if (result != -1) {
    printf("\n The factorial of %d is : %d\n", num, result);
  }
  return 0;
}
void push(int st[], int val) {
  if (top == MAX - 1) {
    printf("\n Stack Overflow");
  } else {
    top++;
    st[top] = val;
  }
}
int pop(int st[]) {
  int val;
  if (top == -1) {
    printf("\n Stack Underflow");
    return -1;
  } else {
    val = st[top];
    top--;
    return val;
  }
}
int factorial(int n) {
  int result = 1;
  if (n < 0) {
    printf("\n Factorial is not defined for negative numbers.");
    return -1;
  }
  while (n > 1) {
    push(st, n);
    n--;
  }
  while (top != -1) {
    result = result * pop(st);
  }
  return result;
}