#include <stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    k=k%n;
    for(i=0;i<n;i++) b[(i+k)%n]=a[i];
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
