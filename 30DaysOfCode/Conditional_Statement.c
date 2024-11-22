int main()
{
    int N;
    scanf("%d", &N);
    if (N % 2 != 0) {
      printf("Weird");
    }
    else if (N % 2 == 0 && N <= 5 && N >= 2 ) {
      printf("Not Weird");
    }
    else if (N % 2 == 0 && N <= 20 && N >= 6) {
      printf("Weird");
    }
    else if (N % 2 == 0 && N >= 20) {
      printf("Not Weird");
    }

    return 0;
}