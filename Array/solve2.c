#include <stdio.h>

int main()
{
    int seen[10] = {0};
    int N;
    printf("Enter the number ");
    scanf("%d", &N);
    int b;
    while (N > 0)
    {
        b = N%10;
        if (seen[b]==1)
        break;
        seen[b]=1;
        N =N/10;
    }
if(N>0)
printf("Yes is contain a repeted digit");
else
printf("No, ir doesnt contain any repeated digit");

return 0;
}