//WAP to input n numbers in an array. Check how many even and odd.
#include<stdio.h>

int main()
{
     int n;
     printf("Enter total number of elements: " );
     scanf("%d",&n);
     int arr[n];
     for (int i = 0;i < n; i++) {
          scanf("%d",&arr[i]);
     }
     int eve_cnt=0, odd_cnt=0;
     for(int i=0;i<n;i++)
     {
          if(arr[i]%2==0)
          {
               eve_cnt++;
          }
          else{
               odd_cnt++;
          }
     }
     printf("Even elements are: %d\n", eve_cnt);
     printf("Odd elements are: %d", odd_cnt);

}
