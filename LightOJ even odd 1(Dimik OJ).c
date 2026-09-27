#include<stdio.h>
int main()
{
    int T,N,i;
    scanf("%d",&T);
    for(i=1; i<=T;i++)
    {
        scanf("%d",&N);
        if(N%2==0)
        {
           printf("even\n");
        }

        else
        {
            printf("odd\n");
        }

    }


    return 0;
}
