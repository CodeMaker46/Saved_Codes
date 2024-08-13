#include <bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false); 
#define By cin.tie(NULL);
#define Shikshak cout.tie(NULL);
#define ll long long
#define lld long double
#define vll vector<ll>
#define co cout
#define e endl;
#define fi(i,x,n) for(ll i=x;i<n;i++)
#define fd(i,n,x) for(ll i=n;i>=x;i--)
#define pb push_back
#define print(v) for(auto it:v)cout<<it<<" "; cout<<endl;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define sortit(v) sort(v.begin(),v.end())

// Formula : a*b = lcm(a,b) * gcd(a,b)
// Formula to make pairs : (n*(n-1) )/2
// Always use map for hashing instead of unordered_map as it may gives TLE

// upper_bound(v.begin(),v.end(),U)
// Returns an iterator pointing to the first element that is greater than U.
// If no such element is found, returns last

// lower_bound(v.begin(),v.end(),L) gives you the pointer of the value greater than or equal to L
// lower_bound(v.begin(),v.end(),L) - v.begin() gives you the index of the value greater than or equal to L

// sort(v.begin(),v.end(),greater<ll>()); sorts the array in descending order

// vec.insert(vec.begin(), x); to insert 'x' at the front of a vector 

// INT_MAX:INT_MAX is typically 2147483647.
// INT_MAX is for int (usually 32-bit signed integer).

// INT_MIN : -2^31
// INT_MAX : 2^31 - 1

// LLONG_MAX: LLONG_MAX is typically 9223372036854775807.
// LLONG_MAX is for long long (usually 64-bit signed integer).

// SLIDING WINDOW OR TWO POINTER CONCEPT
// ll i=0,j=0;
// while(j<n)
// {
//     while(condition not true) i++;
// }

// Maths Functions
ll gcd(ll a, ll b){if(b==0) return a; return gcd(b,a%b);}
ll lcm(ll a,ll b) {return (a*b)/gcd(a,b);}
ll prime(ll n){ if(n==1 || n==0) return 0; for(ll i=2;i*i<=n;i++) if(n%i==0) return 0;return 1;}
ll power(ll x, ll n){ll res=1;while(n){if(n&1) res*=x,n--;else x*=x,n/=2;}return res;}
ll ncr(ll n, ll r){ ll res=1; for(ll i=0;i<r;i++){res*=(n-i); res/=(i+1);} return res;}
ll npr(ll n, ll r){ ll res=1; for(ll i=0;i<r;i++){res*=(n-i); } return res;}

// Polynomial Rolling Hash Function
ll GetHash(string s)
{
    ll p = 31;
    ll m = 1e9+9;
    ll hash_val = 0;
    ll p_pow = 1;
    
    for(auto &c:s)
    {
        hash_val = (hash_val + (c-'a'+1)*p_pow) % m;
        p_pow = (p_pow*p)%m;
    }
    
    return hash_val;
}

// Constants
const ll mod =  1e9+7;
const lld pi= 3.141592653589793;


void solve()
{
    ll n; cin>>n;
    vll v(n); fi(i,0,n) cin>>v[i];
}

int main()
{
    Code By Shikshak
    ll t=1; 
    cin>>t;
    while(t--)
    {
        solve();
    }  
}
