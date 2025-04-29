#include <stdio.h>
int main()
{
  int gross;
  float discount,net_amnt;
  scanf("%d",&gross);
  if(gross<=1000)
  {
    discount = 0.0;
  }
  else if(gross>=1001)
  {
    discount = 0.05;
  }
  else if(gross>=5001)
  {
    discount = 0.1;
  }
  else if(gross>10000)
  {
    discount = 0.15;
  }
  if(gross>30000)
  {
    discount += 0.02;
  }
  net_amnt = gross - (gross * discount);
  
  printf("%.2f",&net_amnt);
    return 0;
}