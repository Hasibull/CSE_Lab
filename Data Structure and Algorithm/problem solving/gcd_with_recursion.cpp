#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a%b==0)
        return b;

    else
        return gcd(b,a%b);

}

int main()
{
    int c,d;

    cin>>c>>d;
    if(d>c){
        int temp=d;
        d=c;
        c=temp;
    }
    int g=gcd(c,d);

    cout<<g<<endl;

    return 0;
}
