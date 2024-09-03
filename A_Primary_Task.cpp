#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


void solve()
{
    string x = "10";
    string  y;
    cin>>y;
    string result =x.append(y);

    string a;
    cin>>a;
    if (result == a)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<endl;
    
    
    
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