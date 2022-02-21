/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark, total = 0;
  float avg;

  for(int i=0; i<2; ++i){
    printf("Enter the marks of %d subject: ", i+1);
    scanf("%d", &mark);

    total = total + mark;
  }

  avg = (float)total / 2.0;
  
  printf("Total: %d \n", total);
  printf("Average: %.2f", avg);
  
  return 0;
}