#include<bits/stdc++.h>

using namespace std;

void merging(int arr[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int temp[100];

    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i];
            i++;
        }
        else{
            temp[k++]=arr[j];
            j++;
        }
    }
    for( ; i<=mid; i++){
        temp[k++]=arr[i];
    }
    for( ; j<=h; j++){
        temp[k++]=arr[j];
    }

    for(int i=l; i<=h; i++){
        arr[i]=temp[i];
    }
}

void merg_sort(int arr[],int n){
    int p;
    for(p=2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i=i+p){
            int l=i;
            int h=i+p-1;
            int mid=(l+h)/2;

            merging(arr,l,mid,h);
        }
    }
    if((p/2)<n)
        merging(arr,0,(p/2)-1,n-1);
}

int main()
{
    int arr[100],n;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    merg_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
