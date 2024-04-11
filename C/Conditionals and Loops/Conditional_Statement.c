#include <stdio.h>
#define SIZE 10

int main(void)
{
  char* numbers[SIZE] = {"", "one", "two", "three", 
  "four", "five", "sex", "seven", "eight", "nine"};

  int n;
  printf("Please enter your number: ");
  scanf("%d", &n);

  if ( n < SIZE )
    printf("%s\n", numbers[n]);
    
  else
    printf("%s\n","Greater than 9");
    
    return 0;
}
