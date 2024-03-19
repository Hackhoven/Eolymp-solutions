#include <stdio.h>

void pushZerosToEnd(int arr[], int n)
{
	int count = {0}; 

	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i]; 
	while (count < n)
		arr[count++] = 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
	    scanf("%d", &arr[i]);
	}
	
	pushZerosToEnd(arr, n);


	for (int i = 0; i < n; i++)
	    printf("%d ", arr[i]);
	return 0;
}