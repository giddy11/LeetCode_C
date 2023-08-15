#include <stdio.h>


int main()
{
    int arr[4] = {1,4,3,2};
    int i, j, cmp = 0, n, res = 0;
    n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n; i++)
    {
        res = 0;
        for (j = 1; j < n; j++)
        {
            res = res + arr[j];
        }
        if (res >= cmp)
            cmp = res;
    }
    
    printf("%d\n", res);



    return (0);
}