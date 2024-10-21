#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,k,l = 0;
    cin>>n>>k;
    for (int i = 1; i <=n; i++)
    {
        if (i+k-1 >= n)
        {
           l += pow(i,i);
        }  
    }
    if (l % 2 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }  
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}