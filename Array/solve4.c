// Multiplication of two matrix

#include <stdio.h>
#define MAX 100
int arr1[MAX][MAX];
int arr2[MAX][MAX];
int final_arr[MAX][MAX];

int main()
{
    int a1;
    int b1;
    int n_rows1, n_column1, n_rows2, n_column2;

    printf("Enter the number of Row in first matrix: ");
    scanf("%d", &n_rows1);

    printf("Enter the number of Column in first matrix: ");
    scanf("%d", &n_column1);

    printf("Enter the number of Row in second matrix: ");
    scanf("%d", &n_rows2);

    printf("Enter the number of Column in second matrix: ");
    scanf("%d", &n_column2);

    if (n_column1 != n_rows2)
    {
        printf("Sorry we can't proceed, No of column in first matrix is not same as no of Rows in second matrix");
        return 1;
    }

    else
    {
        // printf("We can proceed ");
        // C doesn't allow dynamic memory allocation so we are giving a maximum value to the length of array

        printf("Enter the elements of first Matrix ");
        for (a1 = 0; a1 < n_rows1; a1++)
        {
            for (b1 = 0; b1 < n_column1; b1++)
                        {

                scanf("%d", &arr1[a1][b1]);
            }
        }

        printf("Enter the elements of second Matrix ");

        for (a1 = 0; a1 < n_rows2; a1++)
        {
            for (b1 = 0; b1 <n_column2 ; b1++)
            {
                scanf("%d", &arr2[a1][b1]);
            }
            
        }

        int i;
        int j;
        int z;
        printf("Result");
        printf("\n");
        for (i = 0; i < n_rows1; i++)
        {
            for (z = 0; z < n_column2; z++)
            {
                int sum = 0;
                for (j = 0; j < n_rows2; j++)
                {
                    sum += arr1[i][j] * arr2[j][z];
                }
                printf("%d ", sum);
            }
        printf("\n");
        }

    }
    return 0;
}

