#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int d = 0;
    scanf("%d", &n);
    
    while (n != 0)
{
    d += (n % 10);
    n /= 10;
}
    printf("%d", d);
    return 0;
}
