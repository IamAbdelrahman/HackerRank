#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    int j;
    double a;
    char c[100];
    
    scanf("%d", &j);
    scanf("%lf", &a);
    getc(stdin);
    fgets(c, 100, stdin);
    
    printf("%d\n", i + j);
    printf("%.1lf\n", d + a);
    printf("%s", s);
   printf("%s", c);

    return 0;
}