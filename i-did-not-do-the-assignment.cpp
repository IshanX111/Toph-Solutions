#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool is_prime(ll n){

    ll c=0;
    ll n1=ceil(sqrt(n));
    for(ll i=2;i<=n1;i++){
        if(n%i==0){
            c++;
            break;
        }

    }
    return c;

}


int main(){

    ll n;
    cin>>n;
    if(!is_prime(n)){
        cout<<"NO PUNISHMENT"<<endl;
    }
    else{
        for(ll i=0;i<n;i++){
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }



}
