#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define co cout
#define e endl;
#define fi(i,x,n) for(ll i=x;i<n;i++)
#define fd(i,n,x) for(ll i=n;i>=x;i--)
#define pb push_back
// Formula : a*b = lcm(a,b) * gcd(a,b)
// Formula to make pairs : (n*(n-1) )/2
// lower_bound(v.begin(),v.end(),L) gives you the pointer of the value greater than or equal to L
// lower_bound(v.begin(),v.end(),L) - v.begin() gives you the index of the value greater than or equal to L
// sort(v.begin(),v.end(),greater<ll>()); sorts the array in descending order

// INT_MAX:INT_MAX is typically 2147483647.
// INT_MAX is for int (usually 32-bit signed integer).

// LLONG_MAX: LLONG_MAX is typically 9223372036854775807.
// LLONG_MAX is for long long (usually 64-bit signed integer).

using namespace std;
const int mod = 1e9+7;

void solve()
{
    ll n; cin>>n;
    vll v(n);
    fi(i,0,n) cin>>v[i];
}

int main()
{
    ios_base::sync_with_stdio(false); 
    // disable the synchronization between the C++ and C 
    cin.tie(nullptr);
    ll t=1; 
    cin>>t;
    while(t--)
    {
        solve()
    }  
}
