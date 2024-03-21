/*
  for every position we have 2 possibilities either 0 or 1 so in total we have 2^n % MOD
  and we take the mod during the loop to avoid overflow
  from number theory this equation holds: (a*b)%mod = (a%mod * b%mod)%mod
*/

#include <bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define ll long long int
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (int)v.size()
#define PB push_back
 
void solve(){
	ll n,ans=1; cin >> n;
	ll mod = 1e9+7;
	rep(i,0,n){
		ans*=2;
		ans%=mod;
	}
	cout<<ans<<'\n';
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
} 	 		    			  	
