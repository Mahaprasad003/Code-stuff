// WAP to create an array of n elements and pass it through a function and traverse the array
#include<stdio.h>

// userdefined function
void trav(int a[], int n)
{
     for(int i=0;i<n;i++)
     {
          printf("%d ", a[i]);
     }
}
//traverse

int main()
{
     int n;
     printf("Enter number of elements: ");
     scanf("%d", &n);
     int a[n];

     printf("Enter the elements: ");
     for(int i=0;i<n;i++)
     {
          scanf("%d", &a[i]);
     }
     trav(a,5);


}
