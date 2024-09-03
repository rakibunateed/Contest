#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n ;
    cin>>n;
    string rows[n];
    for (int i = 0; i < n; i++)
    {
        cin>>rows[i];
    }
    for (int i = n-1; i >= 0; --i)
    {
        for (int j = 0; j < 4; j++)
        {
            if (rows[i][j]=='#')
            {
                cout<<j+1<<" ";
                break; 
            }    
        }
        
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