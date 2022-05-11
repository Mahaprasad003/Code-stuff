#include<stdio.h>

void create();
void transpose();
void add();
void menu();
void traverse();
void cases();
int max(int,int);
int min(int,int);
void maxx();
void minn();
void diagonal();
void sum_all();

int arr[3][3];
int trans[3][3];
int res[3][3];


int main()
{
     printf("Welcome to the program\n");
     menu();
}

int max(int a, int b)
{
     if(a>b)
     {
          return a;
     }
     else
     {
          return b;
     }
}

int min(int a, int b)
{
     if(a<b)
     {
          return a;
     }
     else
     {
          return b;
     }
}
void maxx()
{
     int max_element = arr[0][0];
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               max_element= max(arr[i][j], max_element);
          }
     }
     printf("The maximum element in the array is: %d\n", max_element);
     printf("Choose your next task: ");
     cases();

}
void minn()
{
     int min_element = arr[0][0];
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               min_element= min(arr[i][j], min_element);
          }
     }
     printf("The minimum element in the array is: %d\n", min_element);
     printf("Choose your next task: ");
     cases();

}



void create()
{
     printf("Enter your elements: ");
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               // cin>>arr[i][j];
               scanf("%d",&arr[i][j]);
          }
     }
     printf("\nChoose your next task: ");
     cases();
}

void diagonal()
{
     printf("The diagonal elements are: \n");
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               if(i==j)
               {
                    printf("%d", arr[i][j]);
               }
               else{
                    printf(" \t");
               }
          }
          printf("\n");
     }
     printf("\nChoose your next task: ");
     cases();
}

void transpose()
{
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               trans[j][i] = arr[i][j];
          }
     }
     // cout<<"Transpose of the matrix is: "
     printf("Transpose of the matrix is: \n");
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               // cout<<trans[i][j]<<'\t';
               printf("%d", trans[i][j]);
               printf("\t");
          }
          printf("\n");
     }
     printf("\nChoose your next task: ");
     cases();
}
void traverse()
{
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               // cout<<arr[i][j]<<'\t';
               printf("%d", arr[i][j]);
               printf("\t");
          }
          printf("\n");
     }
     printf("\nChoose your next task: ");
     cases();
}
void menu()
{
     printf("----- Menu -----\n");
     printf("1. Create a 2D array\n");
     printf("2. Traverse the 2D array\n");
     printf("3. Add another array\n");
     printf("4. Transpose of the 2D array\n");
     printf("5. Maximum element of the 2D array\n");
     printf("6. Minimum element of the 2D array\n");
     printf("7. Diagonal elements of the 2D array\n");
     printf("8. Sum of all elements\n");
     printf("9. Exit\n");
     cases();
}

void add()
{
     printf("Enter the elements of second array: ");
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               // cin>>trans[i][j];
               scanf("%d", &trans[i][j]);
          }
     }
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               res[i][j] = arr[i][j] + trans[i][j];
          }
     }
     // cout<<"The sum of the 2 arrays are: "<<endl;
     printf("The sum of the 2 arrays are: ");
     printf("\n");
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               // res[i][j]<<'\t';
               printf("%d", res[i][j]);
               printf("\t");
          }
          printf("\n");
     }
     printf("\nChoose your next task: ");
     cases();
}

void sum_all()
{
     int sum=0;
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {
               sum += arr[i][j];
          }
     }
     printf("Sum of all elements in the 2D array is: %d\n", sum);
     printf("\nChoose your next task: ");
     cases();

}
void cases()
{
     int choice;
     scanf("%d", &choice);
     switch(choice)
     {
          case 1:
               create();
               break;
          case 2:
               traverse();
               break;
          case 3:
               add();
               break;
          case 4:
               transpose();
               break;
          case 5:
               maxx();
               break;
          case 6:
               minn();
               break;
          case 7:
               diagonal();
               break;
          case 8:
               sum_all();
               break;
          case 9:
               printf("Thank you for your time.");
               return;
          default:
               printf("Invalid choice");
               printf("Try again.");
               menu();
     }
}
