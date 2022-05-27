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
     printf("\n input choice n for break");
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
          printf("Input choice for break\n");
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

void main()
{
     struct node *p=(struct node*)malloc(sizeof(struct node));
     create(p);
     display(p);
}
