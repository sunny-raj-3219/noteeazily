#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of lines:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=i;j<n;j++){
            printf(" ");
            for(int k=1;k<i*4;k++)
            printf("* ");
            printf("\n");
        }
        for(int i=n-1;i>=1;i--)
        {
            for (int j=n;j>i;j--){
                printf(" ");
            }
            for(int k=1;k<i*2;k++){
            printf("* ");
            printf("\n");
            }
    }
    }
}


