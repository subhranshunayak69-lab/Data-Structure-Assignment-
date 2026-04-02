#include <stdio.h>
#include <stdlib.h>
void array_insertion(int A[], int n, int loc, int x)
{
    int i;
    if (loc < 0 || loc > n)
    {
        printf("Invalid location\n");
        return;
    }
    for (i = n; i > loc; i--)
    {
        A[i] = A[i - 1];
    }
    A[loc] = x;
    n++;
    printf("Printing Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}
int main()
{
    int n, A[10], i, loc, x;
    printf("Input Length: ");
    scanf("%d", &n);
    printf("Input Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Input location and value: ");
    scanf("%d %d", &loc, &x);
    array_insertion(A, n, loc, x);
    return 0;
}
