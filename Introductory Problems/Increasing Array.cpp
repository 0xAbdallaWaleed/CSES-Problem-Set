/*
	-we will just get the numbers from the user and whenever we see a number that is
	less than the previous one -> we increase our ans by the difference between them
	then make this number equal to it's previous one so that we keep the array non-decreasing
	*time complexity: O(n)
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
	ll n,ans=0; cin >> n;
	vector<ll> v(n);
	rep(i,0,n){
		cin>>v[i];
		if(i&&v[i-1]>v[i]){
			ans += v[i-1]-v[i];
			v[i]=v[i-1];
		}
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
