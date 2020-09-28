#include<stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int r1,r2,b,ball_played;
        double current_rr=0.0,asking_rr=0.0;
        scanf("%d %d %d",&r1,&r2,&b);
        ball_played= 300-b;
        current_rr = (r2 * 1.0) / (ball_played / 6.0);
        int runs_req = r1 + 1- r2;
        asking_rr = (runs_req * 1.0) / (b / 6.0);

        if(runs_req<=0)
            asking_rr=0;
        printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
    }
    return 0;
}
