#include<stdio.h>
int main(){
int val=0;
int ar[5]={4,5,2,25,11};
for (int i=0 ;i<=5;i++)
{
    val = -1;
for (int j=i+1;j<5;j++)
{
if(ar[i]<ar[j])
{
val = ar[j];

break;

}
printf("\n%d is %d",ar[i],val);
}
}
return 0;

}
