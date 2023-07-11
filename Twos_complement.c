#include <stdio.h>
// #include <math.h>
void main()
{
    int i, count = 0, n;
    printf("Enter size=");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    i = n;
    do
    {

        i--;
        count++;

    } while (arr[i] != 1);
    for (i = n - 1 - count; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}