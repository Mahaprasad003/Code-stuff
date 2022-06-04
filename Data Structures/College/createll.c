//create a simple linked list

#include<stdio.h>
#include<malloc.h>

struct node
{
     int data;
     struct node *next;
};

struct node *start = NULL;
void create(struct node*);
void display(struct node*);


void create(struct node *p)
{
     char ch;
     printf("\n Press 'n' to stop");
     int i=0;
     ch = getchar();
     while(ch != 'n')
     {
          printf("\nInput data for the node %d ", i+1);
          scanf("%d", &p->data);
          p->next=(struct node*)malloc(sizeof(struct node));
          p = p->next;
          p->next=start;
          i++;
          printf("Press 'n' to stop\n");
          scanf(" %c", &ch);
     }
}

//Display the linked list created
void display(struct node *p)
{
     printf("Data of the entered nodes are as follows: \n");
     while(p->next != NULL)
     {
          printf("%d\n", p->data);
          p = p->next;
     }
}

//Insert a new node
void insertNode(struct node *p)
{
     printf("Enter the value you want to add: ");
     scanf("%d", &p->data);
     p = (struct node*)malloc(sizeof(struct node));
     p = p->next;
     p->next = start;
     start = p;
     printf("Success! Node inserted");
}

void main()
{
     struct node *p=(struct node*)malloc(sizeof(struct node));
     create(p);
     display(p);
     insertNode(p);
}
