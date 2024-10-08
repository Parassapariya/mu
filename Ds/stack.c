#include<stdio.h>

#define MAX 3
int st[MAX], top = -1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
void update(int st[], int val, int idx);
void main() {
  int val, option, idx;
  do {
    printf("\n Main Menu");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. UPDATE");
    printf("\n 5. DISPLAY");
    printf("\n 6. Exit");
    printf("\n\n Enter Your Choice : ");
    scanf("%d", & option);
    switch (option) {
    case 1:
      printf("\n Enter the number to be pushed on to the stack : ");
      scanf("%d", & val);
      push(st, val);
      break;
    case 2:
      val = pop(st);
      if (val != -1)
        printf("\n The Value deleted from the stack is : %d", val);
      break;
    case 3:
      val = peek(st);
      if (val != -1)
        printf("\n The value stored at the top of the stack is :%d", val);
      break;
    case 4:
      printf("\n Enter the number to be updated on to the stack : ");
      scanf("%d", & val);
      printf("\n Enter the index to be updated on to the stack : ");
      scanf("%d", & idx);
      if (idx < 1 || idx > MAX) {
        printf("\n Invalid Index");
      } else {
        update(st, val, idx);
      }
      break;
    case 5:
      display(st);
      break;
    }
  } while (option != 6);
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
void display(int st[]) {
  int i;
  if (top == -1) {
    printf("\n Stack is Empty");
  } else {
    for (i = top; i >= 0; i--) {
      printf("\n%d", st[i]);
    }
  }
}
int peek(int st[]) {
  if (top == -1) {
    printf("\n Stack is Underflow");
    return -1;
  } else {
    return (st[top]);
  }
}
void update(int st[], int val, int idx) {
  if (top - idx + 1 <= -1) {
    printf("\n Stack Underflow");
  } else {
    st[top - idx + 1] = val;
  }
}