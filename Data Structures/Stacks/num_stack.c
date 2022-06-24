#include<stdio.h>
#include<stdlib.h>
#define maxstk 100
int top=-1;
int items[maxstk];
int isempty();
int isfull();
void push(int);
int pop();
void display();
void main()
{
	int x;
	char ch='1';

	while(ch!='4')
	{
		printf("\n 1-push");
		printf("\n 2-pop");
		printf("\n 3-Display");
		printf("\n 4-Quit");
		printf("\n Enter your choice");
		ch=getchar();
		switch(ch)
		{
			case '1':
				printf("enter element to pushed");
				scanf(" %d",&x);
				push(x);
				break;
			case '2':
				x=pop();
				printf("popped element is %d",x);
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
	if(top==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(top==maxstk-1)
	return 1;
	else
	return 0;
}
void push(int x)
{
	if(isfull())
	{
		printf("stack full");
	}
	top++;
	items[top]=x;
}
int pop()
{
	int x;
	if(isempty())
	{
		printf("Stack empty");
		exit(0);
	}
	x=items[top];
	top--;
	return x;
}
void display()
{
	int i;
	if(isempty())
	{
		printf("Stack empty");
		return;
	}
	printf("Elements in the stack");
	for(i=top;i>=0;i--)
	printf("%d\n",items[i]);
}
