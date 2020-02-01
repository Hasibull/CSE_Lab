#include<bits/stdc++.h>
#define MAX 1000001

using namespace std;

char prime[MAX];

void primeGenerator( int n )
{
    int x = sqrt( n );
    prime[0] = prime[1] = 1;
    for( int i=4; i<=n; i+=2)
        prime[i]=1;

    for( int i=3; i<=x; i+=2){
        if( prime[i]==0){
            for( int j=i+i; j<=n; j+=i)
                prime[j]=1;
        }
    }
    for(int i=0; i<=n; i++){
        if(prime[i]!=1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return;
}
int main()
{
    primeGenerator(10000);
    return 0;
}
