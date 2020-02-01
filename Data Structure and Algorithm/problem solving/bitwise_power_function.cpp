#include<bits/stdc++.h>

using namespace std;

int power(int a,int n)
{
    string bin="";
    int temp;
    while(n>0)
    {
        temp=n%2;
        if(temp==0) bin+="0";
        else bin+="1";
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    /// bin নামক  স্ট্রিং এ এখন আমাদের n এর বাইনারী ফর্ম টি সেইভড!

    int res=1; /// এই সেই 5^0,যা আমি উদাহরণে ব্যবহার করেছিলাম

    for(int i=0; i<bin.size(); i++)
    {
        res=res*res;
        if(bin[i]=='1') res=a*res;
    }
    return res;
}

int main()
{
    int a,n;

    cin>>a>>n;

    int ans;

    ans=power(a,n);

    cout<<ans<<endl;

    return 0;
}
