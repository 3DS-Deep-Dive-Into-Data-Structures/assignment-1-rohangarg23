#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void sum_of_three_algorithm(vector <ll> &vec, ll x,ll n){

    vector< vector<ll> > v(n,vector <ll> (2));
    for (int i = 0; i < n; i++) {
        v[i][0] = vec[i];
        v[i][1] = i + 1;
    }
    sort(v.begin(),v.end());
    for(ll p1=0;p1 < n-2;p1++){
        ll p2=p1+1;
        ll p3=n-1;
    while(p2<p3){
        if(v[p1][0]+v[p2][0]+v[p3][0]==x){
            cout<<v[p1][1]<<" "<<v[p2][1]<<" "<<v[p3][1]<<endl;
            return;}
        if(v[p1][0]+v[p2][0]+v[p3][0]<x)
           p2++;
        if(v[p1][0]+v[p2][0]+v[p3][0]>x)
           p3--;
        
    }
    }
    cout << "IMPOSSIBLE";

}

int main(){
    ll n,x;
    cin>>n>>x;
    vector <ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum_of_three_algorithm(arr,x,n);

    return 0;
}