#include <stdio.h>

#define MAX 3
int queue[MAX];
int front = -1, rear = -1;
void insert();
void delete_element();
void display();
void main() {
  int option, val;
  do {
    printf("\n\n ***** MAIN MENU *****");
    printf("\n 1. Insert an element");
    printf("\n 2. Delete an element");
    printf("\n 3. Display the queue");
    printf("\n 4. EXIT");
    printf("\n Enter your option : ");
    scanf("%d", & option);
    switch (option) {
    case 1:
      insert();
      break;
    case 2:
      delete_element();
      break;
    case 3:
      display();
      break;
    }
  } while (option != 4);
}
void insert() {
  int num;
  printf("\n Enter the number to be inserted in the queue : ");
  scanf("%d", & num);
  if (rear == MAX - 1)
    printf("\n OVERFLOW");
  else if (front == -1 && rear == -1)
    front = rear = 0;
  else
    rear++;
  queue[rear] = num;
}
void delete_element() {
  int val;
  if (front == -1 || front > rear) {
    printf("\n UNDERFLOW");
  } else {
    val = queue[front];
    if (front == rear)
      front = rear = -1;
    front++;
    printf("\n The number deleted is %d", val);
  }
}
void display() {
  int i;
  printf("\n");
  if (front == -1 || front > rear)
    printf("\n QUEUE IS EMPTY");
  else {
    for (i = front; i <= rear; i++)
      printf("\t %d", queue[i]);
  }
}