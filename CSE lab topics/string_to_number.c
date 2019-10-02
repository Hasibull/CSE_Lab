#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100]={'5','3','2'};

    int l=strlen(ch),num=0;

    for(int i=0; i<l; i++){
        num=(num*10)+(ch[i]-48);
    }
    printf("%d\n",num);

    return 0;
}
