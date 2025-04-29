#include<stdio.h>
int main()
{
    int arr[5] = {4,5,2,25,11};
    int val = 0;
    for(int i=4; i>=0;i--)
    {
        val = -1;
        for(int j=i-1; j>0; j--)
        {
            if(arr[j]>arr[i])
            {
                val = arr[j];
                break;
            }        
        }
        printf("\n%d -----> %d\n",arr[i],val);       
    }    
}


