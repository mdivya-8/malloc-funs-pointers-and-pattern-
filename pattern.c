PATTERN
#include <stdio.h>

int main()
{
    const int n=5;
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i<=j)
            printf("*");
            else
            printf("_");
        }
        printf("\n");
    }
}
