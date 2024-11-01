#include <bits/stdc++.h>
#define co cout
#define e endl
#define ll long long
#define print(v) for(auto &it:v) {co << it << " ";} co << e;
#define mod 1000000007
using namespace std;

ll power(ll a, ll b, ll m) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}

void storeHash(string &s, vector<ll>& hashOfS, vector<ll>& invOfS) {
    ll p_pow = 1;
    ll p = 31;
    ll n = s.size();
    hashOfS[0] = (s[0] - 'a' + 1);
    invOfS[0] = 1; // Inverse of p^0 is 1

    for (ll i = 1; i < n; i++) {
        p_pow = (p_pow * p) % mod;
        hashOfS[i] = (hashOfS[i - 1] + (s[i] - 'a' + 1) * p_pow) % mod;
        invOfS[i] = power(p_pow, mod - 2, mod);  // Modular inverse of the power
    }
}

ll gethash(vector<ll>& hashOfS, vector<ll>& inv, ll l, ll r) {
    ll res = hashOfS[r];
    if (l > 0) res = (res - hashOfS[l - 1] + mod) % mod;
    res = (res * inv[l]) % mod;
    return res;
}

int main() {
    string txt, pattern;
    cin >> txt >> pattern;
    ll n = txt.size(), m = pattern.size();
    
    vector<ll> hashOftxt(n), hashOfpattern(m), invOftxt(n), invOfpattern(m);
    
    storeHash(txt, hashOftxt, invOftxt);
    storeHash(pattern, hashOfpattern, invOfpattern);

    ll cnt = 0;
    ll patternHash = gethash(hashOfpattern, invOfpattern, 0, m - 1);
    
    for (ll i = 0; i <= n - m; i++) {
        ll txtHash = gethash(hashOftxt, invOftxt, i, i + m - 1);
        if (txtHash == patternHash) cnt++;
    }

    co << cnt << e;
    return 0;
}
