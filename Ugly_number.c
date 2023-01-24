
#include <stdio.h>
int is_ugly(int num)
{
  if (num <= 0)
  return 0;
  if (num == 1)
  return 1;
  while (num%2 == 0)
  num=num/2;
  while (num%3 == 0)
  num=num/3;
  while(num%5 == 0)
  num=num/5;
  
  return num == 1; // if num is 1, it is an ugly number
}

int main()
{
  int num;
  scanf("%d",&num);
  if (is_ugly(num))
  {
    printf("Ugly Number");
  }
  else
  {
    printf("Not Ugly Number");
  }
}

