/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i,tot,avg,marks;

  for(i=1 ; i<=2 ;i++)
  {
    printf("Enter marks for %d:",i);
    scanf("%d",&marks);
    tot+=marks;
  }
  return 0;
}

