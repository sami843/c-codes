#include<stdio.h>
int main()
{
    int N=5;
    for(int i=1;i<N;i++)
    {
        for(int j;j<=N-i;i++)
            printf(" ");
        for(int j=1;j<2*i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
