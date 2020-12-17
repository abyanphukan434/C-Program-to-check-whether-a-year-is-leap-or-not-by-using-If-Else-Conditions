#include <stdio.h>

int main() 
{
  int year;
  printf("Enter a year:");
  scanf("%d", &year);
  if (year % 4 == 0)
  {
    printf("The given year is leap");
  }
  else
  {
    printf("The given year is not leap");
  }
  
  return 0;
}
