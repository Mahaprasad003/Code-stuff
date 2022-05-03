#include<stdio.h>
#include<stdlib.h>

struct Node
{
     int data;
     struct Node *next;
}*first = NULL;

void Create(int a[], int n)
{
     struct Node *last;
     first = (struct Node *)malloc(sizeof(struct Node));
     first -> data = a[0];
     first -> next = NULL;
     last = first;

     struct Node *t;
     for(int i=1;i<n;i++)
     {
          t = (struct Node *)malloc(sizeof(struct Node));
          t -> data = a[i];
          t -> next = NULL;
          last -> next = t;
          last = t;
     }
}

void Display(struct Node *p)
{
     while(p!=NULL)
     {
          printf("%d ", p->data);
          p = p->next;
     }


}


int main()
{
     int a[4] = {10,20,30,40};
     Create(a,4);
     Display(first);
}
