#include<stdio.h>

void create();
void maxx();
void minn();
void traverse();
void rev();
void menu();
void sum();
void cases();
int arr[10];

int max(int a, int b)
{
     if(a>b)
     {
          return a;
     }
     else{
          return b;
     }
}
int min(int a, int b)
{
     if(a<b)
     {
          return a;
     }
     return b;
}


int main()
{
     // cout<<"Welcome to the program!"<<endl;
     printf("Welcome to the program!\n");
     menu();
}

void create()
{
     // cout<<"Enter the 10 elements"<<endl;
     printf("Enter the 10 elements\n");

     for(int i = 0; i<10; i++)
     {
          // cin>>arr[i];
          scanf("%d", &arr[i]);
     }
     // cout<<endl;
     // cout<<"\nChoose your next task"<<endl;
     printf("\nChoose your next task: ");
     cases();

}
void traverse()
{
     for(int i=0;i<10;i++)
     {
          // cout<<arr[i]<<" ";
          printf("%d\t", arr[i]);
     }
     // cout<<endl;
     printf("\nChoose your next task: ");
     cases();
}
void maxx()
{
     int a = arr[0];
     for(int i=0;i<10;i++)
     {
          a = max(arr[i], a);
     }
     // cout<<"Maximum element in the array is: "<<a<<endl;
     printf("Maximum element in the array is: %d\n", a);
     printf("\nChoose your next task: ");
     cases();
}

void minn()
{
     int a = 10000;
     for(int i=0;i<10;i++)
     {
          a = min(arr[i], a);
     }
     // cout<<"Minimum element in the array is: "<<a<<endl;
     printf("Minimum element in the array is: %d\n", a);
     printf("\nChoose your next task: ");
     cases();
}

void rev()
{
     for(int i = 9; i>=0;i--)
     {
          // cout<<arr[i]<<" ";
          printf("%d\t", arr[i]);
     }

     printf("\nChoose your next task: ");
     cases();
}

void sum()
{
     int sum = 0;
     printf("The sum of all the elements is: ");
     for(int i=0;i<10;i++)
     {
          sum += arr[i];
     }
     printf("%d", sum);
     printf("\nChoose your next task: ");
     cases();
}

void menu()
{
     printf("-----Menu-----\n");
     // printf("Choose your task\n");
     printf("1. Create an array\n");
     printf("2. Maximum number in array\n");
     printf("3. Minimum number in array\n");
     printf("4. Traverse the array\n");
     printf("5. Reverse the array\n");
     printf("6. Sum of all elements in the array\n");
     printf("7. Repeat again\n");
     printf("8. Exit\n");
     printf("\nChoose your task: ");
     cases();
}

void cases()
{
     int choice; scanf("%d", &choice);
     switch(choice)
     {
          case 1:
               create();
               break;
          case 2:
               maxx();
               break;
          case 3:
               minn();
               break;
          case 4:
               traverse();
               break;
          case 5:
               rev();
               break;
          case 6:
               sum();
               break;
          case 7:
               menu();
               break;
          case 8:
               // cout<<"Thank you for your time"<<endl;
               printf("Thank you for your time\n");
               return;
          default:
               printf("Wrong choice");
               printf("Please enter correct choice");
               menu();
               return;

     }

}
