/*
  first let's get the sum of the first 1,..,n numbers and check if it's even or not, if it's an odd then we know we can't divide the sume into
  two equal parts, for this we use the equation n(n+1)/2
  second we solve it greedily by looping from right to left and get the max numbers we can get as long as we didn't reach half of the sum and
  let's mark the numbers we have taken for the first set
  at least we check if all the numbers we have NOT taken is exactly half of the original sum then we have got out 2 sets xD
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
	ll n; cin >> n;
	ll s = n*(n+1)/2;
	if(s&1)cout<<"NO\n";
	else{
		//cout<<"YES\n";
		bool vis[n+1]{0};
		ll ss = s/2;
		for(int i = n; i; i--){
			if(ss>=i){
				ss-=i;
				vis[i]=true;
			}
		}
		vector<int> v1,v2;
		ll s1=0,s2=0;
		rep(i,1,n+1){
			if(vis[i])s1+=i,v1.PB(i);
			else s2+=i,v2.PB(i);
		}
		if(s1==s2){
			cout<<"YES\n";
			cout<<sz(v1)<<'\n';
			for(int &j: v1)cout<<j<<' ';
			cout<<'\n'<<sz(v2)<<'\n';
			for(int &j: v2)cout<<j<<' ';
		}else{
			cout<<"NO\n";
		}
	}
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
}
