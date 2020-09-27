#include<stdio.h>
int main()
{
    int T,i,num,last,fast,sum=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&num);
        last = num%10;
        fast = num;
        while (num >=10)
        {
           num =num/10;
        }
        fast =num;
        sum =fast + last;
        printf("Sum = %d\n",sum);

    }
    return 0;


}
