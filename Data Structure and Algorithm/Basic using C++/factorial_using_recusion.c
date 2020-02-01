#include<stdio.h>

int fact(int n){
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n,f=0;

    scanf("%d",&n);

    f=fact(n);

    printf("%d\n",f);

    return 0;
}
