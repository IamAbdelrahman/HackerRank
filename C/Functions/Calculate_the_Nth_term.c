#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum = 0;
int N(int n, int a, int b, int c) {

    if (n==1)   return a;
    if (n==2)   return b;
    if (n==3)   return c;

    else
        sum = N(n-3, a, b, c) + N(n-2, a, b, c) + N(n-1, a, b, c);
        return sum;

    }

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = N(n, a, b, c);
 
    printf("%d\n", ans); 
    return 0;
}
