#include<stdio.h>
#include<stdlib.h>
#define maxstk 100
int top = -1;
char items[maxstk];
int isempty();
int isfull();
void push(char);
char pop();
void display();

void main()
{
     char x;
     char ch = '1';

     while(ch != '4')
     {
          printf("----MENU----\n");
          printf("1. PUSH into stack\n");
          printf("2. POP from stack\n");
          printf("3. Display stack\n");
          printf("4. Quit\n");
          printf("Enter your choice: ");
          scanf(" %c", &ch);
          switch(ch)
          {
               case '1':
                    printf("Enter element to be pushed: ");
                    scanf(" %c", &x);
                    push(x);
                    break;
               case '2':
                    x = pop();
                    printf("Popped element is %c", x);
                    break;
               case '3':
                    display();
                    break;
               case '4':
                    break;
               default:
                    printf("Wrong choice");
          }
     }
}

int isempty()
{
     if(top == -1)
     {
          return 1;
     }
     else{
          return 0;
     }
}

int isfull()
{
     if(top >= maxstk-1){
          return 1;
     }
     else{
          return 0;
     }
}

void push(char x)
{
     if(isfull())
     {
          printf("Stack is full\n");
     }
     top++;
     items[top] = x;
}

char pop()
{
     char x;
     if(isempty())
     {
          printf("Stack is empty\n");
          exit(0);
     }
     x = items[top];
     top--;
     return x;
}

void display()
{
     char i;
     if(isempty())
     {
          printf("Stack is Empty");
          return;
     }
     printf("Elements in the stack are: \n");
     for(i = top;i>=0;i--)
     {
          printf("%c\n", items[i]);
     }

}
