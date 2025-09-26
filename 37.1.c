#include <stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n],row[m];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        row[i]=0;
        for(j=0;j<n;j++)
            row[i]+=a[i][j];
    }
    for(i=0;i<m;i++)
        printf("%d ",row[i]);
    return 0;
}
