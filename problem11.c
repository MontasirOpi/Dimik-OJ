#include<stdio.h>
int main()
{
    int t,i,n;

    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        scanf("%d",&n);
        long long  f=1;
        for(i=1;i<=n;i++)
        {
            f*=i;

        }
        printf("%lld\n",f);
    }
    return 0;
}
