#include<stdio.h>
#include<math.h>
int main()
{
    int n,T,sqrtn,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
    sqrtn= sqrt(n);
    if(sqrtn * sqrtn ==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }


    return 0;

}
