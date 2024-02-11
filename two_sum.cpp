#include        <bits/stdc++.h>
#include        <ext/pb_ds/tree_policy.hpp>
#define         ll              long long
#define         int             ll
#define         neg_inf         LLONG_MIN
#define         all(x)          x.begin(), x.end()
#define         all2(x)         x, x + sizeof(x) / sizeof(x[0])
#define         pb              push_back
#define         ppb             pop_back
#define         pf              push_front
#define         ppf             pop_font
#define         uniq(v)         (v).erase(unique(all(v)), (v).end())
#define         sz(x)           (int)((x).size())
#define         fr              first
#define         sc              second
#define         vi              vector<int>
#define         vvi             vector<vi>
#define         vl              vector<ll>
#define         vll             vector<vl>
#define         rep(i, a, b)    for (int i = a; i < b; i++)
#define         irep(i, a, b)   for (int i = a; i > b; i--)
#define         mem1(a)         memset(a, -1, sizeof(a))
#define         mem0(a)         memset(a, 0, sizeof(a))
#define         inf             1000000000000000000ll
#define         mod             1000000007ll
#define         mod2            100000009ll
#define         sqr(a)          a * 1ll * a
#define         mpi             map<int, int>
#define         mpl             map<ll, ll>
#define         li              pair<ll, int>
#define         pii             pair<int, int>
#define         pil             pair<int, ll>
using namespace std;
using namespace __gnu_pbds;
typedef pair<ll, ll> pll;
void solve()
{
    int n;
    cin>>n;
    vi arr(n+1,0);
    rep(i,1,n+1){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    vi root;
    for(int i=1;i*i<=n;i++){
       if(n%i==0){
        i*i==n?root.pb(i):(root.pb(i),root.pb(n/i));
       }
    }
    int ans=LONG_LONG_MIN;
    for(auto r:root){
        int i=r;
        int mx=LLONG_MIN,mn=LLONG_MAX;
        while(i<=n){
         int val=arr[i]-arr[i-r];
          mx=max(mx,val);
          mn=min(mn,val);
          i+=r;
        }
        ans=max(ans,mx-mn);
    }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    rep(i,0,t){
        solve();
    }
  
}

