#include <stdio.h>

int main()
{
    int arr[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}};

   

    
    int i;
    int j;


    for(i=0; i<5; i++){
    int row_sum = 0;

    for (j = 0; j < 5; j++)
    {
        row_sum += arr[i][j];
    }
    printf("%d ", row_sum);
    }


// Addition of all columns 
int ii;
int jj;



for ( jj = 0; jj <5; jj++)
{
int column_sum=0;
    for(ii=0; ii<5; ii++){
column_sum +=arr[ii][jj];
    }
    printf("%d ", column_sum);

}

    return 0;
}