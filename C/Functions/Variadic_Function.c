#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int  sum (int count,...) {
  int sum = 0;
  va_list ptr;
  va_start(ptr, count);
  for (int i = 0; i < count; i++)
  {
    sum += va_arg(ptr, int);
  }
  va_end(ptr);
  return sum; 
}

int min(int count,...) {
  va_list ptr;
  va_start(ptr, count);
  int min = va_arg(ptr, int);
  for (int i = 0; i < count; i++)
  {
    int temp = va_arg(ptr, int);
    min = temp < min ? temp : min;
  }
  va_end(ptr);
  return min;
}

int max(int count,...) {
  va_list ptr;
  va_start(ptr, count);
  int max = va_arg(ptr, int);
  for (int i = 0; i < count; i++)
  {
    int temp = va_arg(ptr, int);
    max = temp > max ? temp : max;
  }
  va_end(ptr);
  return max;
}

int main() {
    int result = sum(3, 10, 20, 30);
    printf("Sum: %d\n", result);

    return 0;
}

