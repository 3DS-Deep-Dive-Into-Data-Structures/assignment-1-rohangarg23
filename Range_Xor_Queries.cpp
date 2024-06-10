#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX_N = 2e5;

int main(){
    ll n,q;
    cin>>n>>q;
    vector <ll> x(MAX_N+1);
    vector <ll> sum(MAX_N+1);
    for(ll i=0;i<n;i++){
        ll value;
        cin>>value;
        x[i]=value;
    }
    sum[0]=x[0];
     for(ll i=1;i<n;i++){
        sum[i]=sum[i-1]^x[i];
        // cout<<sum[i]<<endl;
     }

    ll a,b;
    while (q--) {
		cin >> a >> b;
        if(a>1)
		cout << (sum[a-2] ^ sum[b-1]) << endl;
        if(a==1)
		cout << (sum[b-1]) << endl;
        
	}
    

    return 0;
}