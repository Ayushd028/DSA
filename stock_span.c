#include<stdio.h>
int main()
{
    int arr[5] = {7,5,10,99,6};
    int count = 0;
    for(int i = 0; i<5; i++)
    {
        count =1;
        for (int j=i-1; j>=0; j--)
        {
            if(arr[j] < arr[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        printf("%d ----->%d\n",arr[i],count);
    }
    return 0;
}