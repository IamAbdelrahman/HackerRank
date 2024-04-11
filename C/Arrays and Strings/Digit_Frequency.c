#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void D_freq (char [], char []);

int main() {

    char freq[10] = {0};
    char *s;

    s = (char*) malloc(1024* sizeof(char)) ;
    scanf("%[^\n]", s); 
    s = (char*) realloc (s, strlen(s) + 1);
    D_freq (s, freq);
    
    for (int i = 0; i <= 9; ++i)
        printf("%d ", freq[i]);

    return 0;
}

void D_freq (char S[], char b[])
{
    int size = strlen(S);
    for (int i = 0; i < size; ++i)
    {
        switch (S[i])
        {
        case '0':
            ++b[0];
            break;
        case '1':
            ++b[1];
            break;
        case '2':
            ++b[2];
            break;
        case '3':
            ++b[3];
            break;
        case '4':
            ++b[4];
            break;
        case '5':
            ++b[5];
            break;
        case '6':
            ++b[6];
            break;
        case '7':
            ++b[7];
            break;
        case '8':
            ++b[8];
            break;
        case '9':
            ++b[9];
            break;

        default:
            break;
        }
    }
}

