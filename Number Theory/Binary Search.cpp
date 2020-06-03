#include<bits/stdc++.h>
using namespace  std;
#define ll long long int


//Binary Search
ll binary_search(ll A[],ll x,ll low,ll high)
{
    if(low<=high)
    {
    ll mid=(low+high)/2;
    if(x==A[mid])
       return mid;
    else if(x>A[mid])
       return binary_search(A,x,mid+1,high);
    else 
       return binary_search(A,x,low,mid-1);
    }
    return -1;
}


//Main Function
int main()
{
    ll n,x,i;
    cin>>n;
    ll A[n];
    for(i=0;i<n;i++) cin>>A[i];
    cin>>x;
    cout<<binary_search(A,x,0,n-1);
}