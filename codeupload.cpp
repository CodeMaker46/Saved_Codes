#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n; cin>>n;
    for(ll k=1;k<=n;k++)
    {
        ll total=( k*k* ( (k*k) -1) )/2;
        ll ans =total-4*(k-1)*(k-2);
        cout<<ans<<endl;
    }
}