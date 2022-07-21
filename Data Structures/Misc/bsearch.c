#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) 
{
  int a[50], n, i, key;
   printf("enter the no: of elements");
   scanf ("%d",&n);
   printf("enter the elements:\n");
   for (i=0; i<n; i++)
      scanf( "%d", &a[i]);
   printf("enter a key element:\n");
   scanf ("%d", &key);
   int result = binarySearch(a, key, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result+1);
  return 0;
}
