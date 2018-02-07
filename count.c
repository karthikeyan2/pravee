#include <stdio.h>
#define max_size 100
void main()
{
    int arr[max_size];
    int i, n, sum=0;
    printf("Enter size of the array ");
    scanf("%d", &n);
  printf("Enter %d elements in the array ", n);
    for(i=2; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements of array = %d", sum);

 getch();
}
