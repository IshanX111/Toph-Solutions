#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    ll l,r;
    cin>>l>>r;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=l;i<=r;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;




}
