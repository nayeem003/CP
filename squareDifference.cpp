#include <bits/stdc++.h>
using  ll = long long;
using namespace std;

bool isPrime(ll x)
{
    if (x==1) return false;
    for(ll d =2; d*d<=x;d++)
    {
        if(x%d==0) return false;
    }
    return true;
}
void solve()
{
    ll a,b;
    cin >> a >>b;
    if ((a-b==1)&& (isPrime(a+b))) cout <<  "YES\n";
    else cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) solve();
}