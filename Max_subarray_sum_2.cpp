#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define INF 1e18

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>v(n+1);
    vector<ll>pfx_sum(n+1);
    v[0]=0;
    pfx_sum[0]=0;
    for(ll i=1;i<=n;i++)
    {cin>>v[i];
    pfx_sum[i]=pfx_sum[i-1]+v[i];}
    ll max_sum=-INF;
    set <pair<ll,ll>> itr_arr;
    for(ll i=a;i<=b;i++){
        itr_arr.insert({pfx_sum[i],i});
    }
    for(ll i=1;i<=n-a+1;i++){
        max_sum = max(max_sum,itr_arr.rbegin()->first-pfx_sum[i-1]);
        itr_arr.erase({pfx_sum[i+a-1],i+a-1});
        if(i+b<=n)
        itr_arr.insert({pfx_sum[i+b],i+b});
    }
    cout<< max_sum;

}