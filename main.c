#include <stdio.h>

int main(void) {
  int indexNumber, i = 1, sum = 0;
    printf("Enter a whole number: ");
    scanf("%d",&indexNumber);
  
  do{ 
    sum = sum + i;
    i = i + 1;
   } while (i <= indexNumber);
  
  printf("The sum of the numers from 1 to %d is: %d", indexNumber, sum);
     
  return 0;
}
