#include<bits/stdc++.h>

using namespace std;

int big_mod(int a,int b,int c){
    if(b==0)
        return 1%c;

    int x=big_mod(a,b/2,c);

    if(b%2==0){
        return ((x%c)*(x%c))%c;
    }
    else{
        return ((x%c)*(x%c)*(a%c))%c;
    }
}

int main()
{
    int i,j,k,l,m,n;

    cin>>i>>j>>k;

    l=big_mod(i,j,k);

    cout<<l<<endl;

    return 0;
}
