#include<stdio.h>
int main()
{
    int arr[7]={4,2,6,4,1,7,5};
    int C1=0;
    int C2=0;
    int i,area;
    int max_area = 0;
    int min_area = 100;
    for(i=0; i<7; i++)
    {
        C1=1;
        C2=1;
        for(int j=i-1; i>=0; j--)
        {
            if(arr[j]>arr[i])
            {
            C1++;
            }
        
        else{
            break;
        }
        }
        for(int k=i+1; k<7; k++)
        {
            if(arr[k]>arr[i])
            {
                C2++;
            }
            else{
                break;
            }
        }
       area = arr[i]*(C1+(C2-1));
        printf("%d ------> %d\n",arr[i],area);
    }
    if(max_area<area)
    {
        max_area = area;
    }
     if(min_area>area)
    {
        min_area = area;
    }
    printf("\nMaximum area of Histogram is: %d",max_area);
    
    printf("\nMimum area of Histogram is: %d",max_area);

    return 0;
}