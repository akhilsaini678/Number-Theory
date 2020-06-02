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

bool prime(ll n)
{
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    ll k=18;
    while(k--)
    {
        ll a=2+rand()%(n-4);
        ll j=power(a,n-1,n);
        if(j!=1)
        return false;
    }
    return true;
}
int main()
{
    ll n,count=0;
    for(ll i=1;i<=100;i++)
    if(prime(i))
        count++;
    cout<<count<<endl;
}