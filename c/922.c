#include <stdio.h>

void rotate(int arr[], int n)
{
    int x = arr[n-1], i;
    for (i = n-1; i > 0; i--)
    	arr[i] = arr[i-1];
    arr[0] = x;
}

int main()
{
	int n;
    scanf("%d", &n);
    int array[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

	rotate(array, n);

	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}