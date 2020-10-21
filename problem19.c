#include<stdio.h>

int main(){
    int t;
    char s[10001];
    scanf("%d",&t);
    while (t--)
    {
        
        int count=0;
        scanf(" %[^\n]", s);
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                count ++;
            }
        }
        printf("Count = %d\n", count + 1);

    }
    
    return 0;
}