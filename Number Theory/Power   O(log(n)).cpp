#include<bits/stdc++.h>
using namespace std;
#define ll   long long int

ll power(ll n,ll y,ll mod)
{
    ll temp;
    if(y==0)
    return 1;
    temp=power(n,y/2,mod);
    if(y%2==0)
        return (temp*temp)%mod;
    else
        return (n*temp*temp)%mod;
}

//Main Function
int main()
{
    ll n,k,count=0,mod=1e18+1,ans=0;
    cin>>n>>k;
    ans=power(n,k,mod);
    cout<<ans<<endl;
}