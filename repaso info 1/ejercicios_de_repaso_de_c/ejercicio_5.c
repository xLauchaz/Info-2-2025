#include <stdio.h>
#define N 2
#define M 3
int main(int argc, char *argv[])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            printf("i=%d\tj=%d\n",i,j);
        }
    }
    return 0;
}
