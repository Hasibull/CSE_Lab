#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,prime[200];
    int k=0,ck=1;
    for(int i=2; i<=1000; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                ck=0;
                break;
            }
        }
        if(ck==1){
            prime[k]=i;
            k++;
        }
        ck=1;
    }

    cin>>n;

    int i=0;

    while(prime[i]<=(n)){
        if(n%prime[i]==0){
            cout<<prime[i]<<" ";
            n/=prime[i];
        }
        else{
            i++;
        }
    }
    cout<<endl;

    return 0;
}
