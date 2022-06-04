#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
     int data;
     struct Node *next;
};
struct Node *HEAD;

void create();
void insertBegin();
void insertEnd();
void insertRandom();
void delBegin();
void delEnd();
void delRandom();
void traverse();
void search();
void menu();
void cases();

void main()
{
     menu();
}

void menu()
{
     printf("\n**************************************\n");
     printf("\n\n Singly Linked List!\n\n");
     printf("Choose an option from the below list!\n");
     printf("\n**************************************\n");

     printf("1.Do insertion at beginning of the list!\n");
     printf("2.Do insertion at last!\n");
     printf("3.Do insertion at random location!\n");
     printf("4.Do deletion from the beginning of the list!\n");
     printf("5.Do deletion at the last of the list!\n");
     printf("6.Do deletion of a node after a specified node!\n");
     printf("7.Perform a searching operation for an element!\n");
     printf("8.Display!\n");
     printf("9.Exit!\n");
     printf("\n**************************************\n")

     printf("Choose your task:");
     cases();
}

void cases
