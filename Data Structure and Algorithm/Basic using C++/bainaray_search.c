#include<stdio.h>

int main()
{
    ///it is prerequisite that the array must be
    ///sorted for binary search...

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int beg=0,mid=(int)((beg+n)/2);
    int item;

    printf("Enter the number you want to find: ");

    scanf("%d",&item);
    while(item!=arr[mid]){
        if(item<arr[mid]){
            n=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(int)((beg+n)/2);
    }

    printf("The location of the finding number is: %d\n",mid+1);

    return 0;
}
