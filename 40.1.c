#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        printf("%d ",a[i][i]);
    return 0;
}
