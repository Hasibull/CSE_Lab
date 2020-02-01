#include<bits/stdc++.h>

using namespace std;

int exponential(int a,int n){
    if(n==1)
        return a;

    int x=exponential(a,n/2)*exponential(a,n/2);

    if(n%2==0)
        return x;
    else
        return a*exponential(a,n-1);
}

int main()
{
    int a,n,ans;

    cin>>a>>n;

    ans=exponential(a,n);

    cout<<ans<<endl;

    return 0;
}
