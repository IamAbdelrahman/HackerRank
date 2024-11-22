#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE  10000

int main() {
    int testCases, i = 0;
    scanf("%d", &testCases);
    for (i = 0; i < testCases; i++) {
        char str[SIZE] = "";
        char evenStr[SIZE] = "";
        int evenIndex = 0;
        char oddStr[SIZE] = "";
        int oddIndex = 0;
        scanf("%s", str);
        
        for (int j = 0; j < SIZE; j++) {
            if (j % 2 == 0) {
                evenStr[evenIndex++] = str[j];
            }
            else {
                oddStr[oddIndex++] = str[j];
            }
        }
        printf("%s %s", evenStr, oddStr);
        printf("\n");

    }

}
