#include <stdio.h>
int main()
{
    int n,pos,val,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&pos,&val);
    for(i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val;
    n++;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
