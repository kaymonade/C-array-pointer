#include <stdio.h>

int main(void)
{
    int i, j;

    const int ROW = 3;
    const int COL = 4;

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /* Print using pointer/address notation */
    printf("Print using *(*(arr+i)+j)\n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%4d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\n");

    /* Print using normal index notation */
    printf("Print using arr[i][j]\n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}