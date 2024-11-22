int main()
{
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
