#include<stdio.h>
#include<string.h>

int main(){
    int T,i,l,p;
    char n[101];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",&n);
        for(l=0;l<=strlen(n);l++){
            if(l==strlen(n)){
                p=n[l-1];
            }
            else
                continue;

        }
        if(p%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }

 return 0;
}
