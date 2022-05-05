#include<stdio.h>

void create();
void len();
void concat();
void rev();
void palindrome();
void menu();
void cases();
void compare();
void substring();

char arr[100];
char parr[100];
char res[100];
char subs[100];
int main()
{
     menu();
}

void menu()
{
     printf("----- Menu -----\n");
     printf("1. Create a string\n");
     printf("2. Length of the string\n");
     printf("3. Concatenate another string\n");
     printf("4. Reverse the string\n");
     printf("5. Check for palindrome\n");
     printf("6. Compare 2 strings\n");
     printf("7.Substring operation\n");
     printf("8. Exit\n");
     printf("Choose an option: ");
     cases();
}


void create()
{
     printf("Enter the string: ");
     // scanf("%s", &arr);
     fgets(arr, 100, stdin);
     scanf("%[^\n]%*c", arr);

     int length = 0;
     for(int i=0;arr[i]!='\0';i++)
     {
          length++;
     }
     arr[length] = '\0';
     printf("\nChoose your next task: ");
     cases();
}

void len()
{
     printf("Length of the string is: ");
     int length =0;
     for(int i=0;arr[i]!='\0';i++)
     {
          length++;
     }
     printf("%d", length);
     printf("\nChoose your next task: ");
     cases();
}

void concat()
{
     printf("Enter second string: ");
     scanf("%s", &parr);
     int length = 0;
     for(int i=0;parr[i]!='\0';i++)
     {
          length++;
     }
     parr[length] = '\0';

     int k=0;

     for(int i=0;arr[i]!='\0';i++)
     {
          res[i] = arr[i];
          k++;
     }

     for(int i=0;parr[i] !='\0';i++)
     {
          res[k] = parr[i];
          k++;
     }
     res[k] = '\0';


     printf("Concatenated string is: ");
     // printf("%s", arr);
     printf("%s", res);

     printf("\nChoose your next task: ");
     cases();

}

void rev()
{
     printf("The reversed string is: ");
     int length = 0;
     for(int i=0;arr[i]!='\0';i++)
     {
          length++;
     }
     for(int i = length-1; i>=0; i--)
     {
          printf("%c", arr[i]);
     }
     printf("\nChoose your next task: ");
     cases();
}


void palindrome()
{
     int l=0;
     for(int i=0;arr[i] !='\0';i++)
     {
          l++;
     }
     int k = l-1;
     for(int i=0;i<l;i++)
     {
          res[i] = arr[k];
          k--;
     }

     for(int i=0;i<l;i++)
     {
          if(arr[i] != res[i])
          {
               printf("Word is not a palindrome");
               printf("\nChoose your next task: ");
               cases();
               return;
          }
     }
     printf("Word is a palindrome");
     printf("\nChoose your next task: ");
     cases();
}

void compare()
{
     printf("Enter second string: ");
     scanf("%s", &parr);
     int length = 0;
     for(int i=0;parr[i]!='\0';i++)
     {
          length++;
     }
     parr[length] = '\0';
     int i = 0;

     int flag = 0;
     while(arr[i] != '\0' || parr[i] != '\0')
     {
          if(arr[i] != parr[i])
          {
               flag = 1;
               break;
          }
          i++;
     }
     if (flag==0)
     {
          printf("Strings are the same\n");
          printf("\nChoose your next task: ");
          cases();
     }
     else{
          printf("Strings are not the same");
          printf("\nChoose your next task: ");
          cases();
     }

}

void substring()
{
     int a;
     printf("Enter the position from which you want to extract: ");
     scanf("%d", &a);
     int length =0;
     for(int i=0;arr[i]!='\0';i++)
     {
          length++;
     }
     printf("Enter the number of characters you want to extract(< %d): ", length);
     int b;
     scanf("%d", &b);
     printf("The requested string is: ");
     int sub_len = b-a+1;
     int c=0;
     while(c<b)
     {
          subs[c] = arr[a+c-1];
          c++;
     }
     subs[c] = '\0';

     printf("%s", subs);
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
               len();
               break;
          case 3:
               concat();
               break;
          case 4:
               rev();
               break;
          case 5:
               palindrome();
               break;
          case 6:
               compare();
               break;
          case 7:
               substring();
               break;
          case 8:
               printf("Thank you for your time.");
               return;
          default:
               printf("Invalid choice");
               printf("Try again.");
               menu();
     }
}
