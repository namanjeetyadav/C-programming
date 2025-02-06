// Multiplication of two matrix

#include <stdio.h>
int main()
{

    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int arr2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int i;
    int j;
    int z;
    // int sum;
    for (i = 0; i < 3; i++)
    {
        for (z = 0; z < 3; z++)
        {
            int sum=0;
            for (j = 0; j < 3; j++)
            {
                sum += arr1[i][j] * arr2[j][z];
              
            }
        printf("%d ", sum);

        }
    }

    return 0;
}
