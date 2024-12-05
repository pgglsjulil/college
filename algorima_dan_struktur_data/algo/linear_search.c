#include <stdio.h>

int main()
{
    int data[] = {2, 6, 4, 9, 8, 1, 5, 3};
    int n = sizeof(data);
    int x, k = 0;
    int ketemu = 0;
    scanf("%d", &x);

    while (k <= n & ketemu != 1)
    {
        if (data[k] == x)
        {
            ketemu = 1;
        }
        else
            k = k+1;
    }
    
    printf("%d", k+1);
    return 0;
}
