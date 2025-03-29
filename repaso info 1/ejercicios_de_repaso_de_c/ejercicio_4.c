#include <stdio.h>
#define N 10
int factorial(int);
int main(void) 
{
    for(int i=0;i<N;i++){
        printf("%d!=%d\n",i+1,factorial(i+1));
    }
       
    return 0;
}
int factorial(int a)
{
    if(a==0||a==1)
    {
        return 1;
    }
    else
    {
    return a*factorial(a-1);
    }
}
