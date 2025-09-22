#include <stdio.h>
int main()
{
    int n,d,i,max=0,res=0;
    int f[10]={0};
    scanf("%d",&n);
    if(n<0) n=-n;
    while(n>0)
    {
        d=n%10;
        f[d]++;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(f[i]>max)
        {
            max=f[i];
            res=i;
        }
    }
    printf("%d",res);
    return 0;
}
