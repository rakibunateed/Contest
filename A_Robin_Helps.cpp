#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int coin = 0;
    int give = 0;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            coin+= a[i];
        }
        if (a[i] == 0)
        {
            if (coin >= 1)
            {
                coin--;
                give++;
            }  
        }  
    }
    cout<<give<<endl;   
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