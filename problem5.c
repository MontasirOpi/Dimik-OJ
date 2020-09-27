#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int s;
        scanf("%d",&s);

        for(int j=0; j<s; j++)
        {
            for(int k=0; k<s; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i!=t)
        {
            printf("\n");
        }

    }


    return 0;
}
