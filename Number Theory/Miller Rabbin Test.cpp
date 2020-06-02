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

bool miller(ll n,ll x)
{
    ll a=2+rand()%(n-4);
    ll j=power(a,x,n);
    if(j==1||j==n-1)
    return true;
    while(x!=n-1)
    {
        j=(j*j)%n;
        x=x*2;
        if(j==1) return false;
        if(j==n-1) return true;
    }
    return false;
}

bool prime(ll n)
{
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    ll k=6;
    ll x=n-1;
    while(x%2==0)
    {
        x=x/2;
    }
    while(k--)
    {
        if(miller(n,x)==false)
            return false;
    }
    return true;
}

//Main Function
int main()
{
    ll n,count=0;
    for(ll i=1;i<=100;i++)
    if(prime(i))
        count++;
    cout<<count<<endl;
}