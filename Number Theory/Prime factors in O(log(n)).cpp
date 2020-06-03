#include<bits/stdc++.h>
using namespace  std;
#define ll long long int

ll prime[1000001];
//Building Sieve
void sieve()
{
    ll i,j;
    for(i=0;i<=1000000;i++)
        prime[i]=i;
    for(i=2;i<=1000000;i=i+2)
        prime[i]=2;
    for(i=3;i<=1000000;i=i+2)
    {
        if(prime[i]==i)
        {
            for(j=i*i;j<=1000000;j=j+i)
             if(prime[j]==j)
                prime[j]=i;
        }
    }
}

//To generate all prime factor
vector<ll> prime_factor(ll n)
{
    vector<ll> v;
    while(n!=1)
    {
        v.push_back(prime[n]);
        n=n/prime[n];
    }
    return v;
}

//Main Function
int main()
{
    sieve();
    ll n;
    cin>>n;
    vector<ll> v;
    v=prime_factor(n);
    for(ll i=0;i!=v.size();i++)
        cout<<v[i]<<" ";
}