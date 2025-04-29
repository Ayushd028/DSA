#include<stdio.h>
int main()
{
   int n;
    int max=0;
    int min;
    int arr[100];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (int i=0; i<n; i++)
    {
    scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(int i=0; i<n; i++)
    {
        if (min>=arr[i])
        {
            min=arr[i];
        }
         if(max<=arr[i])
        {
        max=arr[i];     
        }
    }
    
     printf("maximum is %d\n",max);
     printf("min is %d\n",min);
    return 0;
}