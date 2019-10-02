#include<stdio.h>

int main()
{
    int link[100],data[100],head=0,size=1,i=0;

    memset(data,0,sizeof(data));
    printf("Enter the link of head node\n");
    scanf("%d",&head);
    link[0]=head;

    while(scanf("%d",&data[link[i]])!=EOF){
        printf("Enter the link of the next element\n");
        i++;
        scanf("%d",&link[i]);
        size++;
    }
    for(int i=0; i<100; i++){
        if(data[i]>0)
            printf("%d ",data[i]);
    }
    return 0;
}
