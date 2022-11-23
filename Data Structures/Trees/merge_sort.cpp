#include <iostream>

using namespace std;

void merge(int a[], int i1, int j1, int i2, int j2)

{

	int temp[50]; //array used for merging

	int i, j, k;

	i = i1; //beginning of the first list

	j = i2; //beginning of the second list

	k = 0;

	while (i <= j1 && j <= j2) //while elements in both lists

	{

		if (a[i] < a[j])

			temp[k++] = a[i++];

		else

			temp[k++] = a[j++];

	}

	while (i <= j1) //copy remaining elements of first list

		temp[k++] = a[i++];

	while (j <= j2) //copy remaining elements of second list

		temp[k++] = a[j++];

//Transfer elements from temp[] back to a[]

	for (i = i1, j = 0; i <= j2; i++, j++)

		a[i] = temp[j];

}

void mergesort(int a[], int i, int j)

{

	int mid;

	if (i < j)

	{

		mid = (i + j) / 2;

		mergesort(a, i, mid); //left recursion

		mergesort(a, mid + 1, j); //right recursion

		merge(a, i, mid, mid + 1, j); //merging of two sorted sub-arrays

	}

}

int main()

{

	int a[30], n, i;

	cout << "Enter no of elements:";

	cin >> n;

	cout << "Enter array elements:";

	for (i = 0; i < n; i++)

		cin >> a[i];

	cout << "\n Unsorted array is :";

	for (i = 0; i < n; i++)

		cout << a[i] << "\t";

	cout << endl;

	mergesort(a, 0, n - 1);

	cout << "\n Sorted array is :";

	for (i = 0; i < n; i++)

		cout << a[i] << "\t";

	return 0;

}