#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define co cout
#define ci cin
#define e endl;
#define fi(i,x,n) for(ll i=x;i<n;i++)
#define fie(i,x,n) for(ll i=x;i<=n;i++)
#define fd(i,n,x) for(ll i=n-1;i>=x;i--)
#define fde(i,n,x) for(ll i=n;i>=x;i--)
#define pb push_back
using namespace std;
ll gcd(ll a, ll b){if(b==0) return a;gcd(b,a%b);}
ll prime(ll n){ if(n==1 || n==0) return 0; for(ll i=2;i*i<=n;i++) if(n%i==0) return 0;return 1;}
ll power(ll x, ll n){ll res=1;while(n){if(n&1) res*=x,n--;else x*=x,n/=2;}return res;}
ll ncr(ll n, ll r){ ll res=1; for(ll i=0;i<r;i++){res*=(n-i); res/=(i+1);} return res;}
ll npr(ll n, ll r){ ll res=1; for(ll i=0;i<r;i++){res*=(n-i); } return res;}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        
    }  
}
