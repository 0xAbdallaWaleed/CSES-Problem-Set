/*
  we can easly see that in order to have a trailing zero in the answer we have to get 2 and 5 in the product 
  so answer can be found by counting how mant 2's and 5's are there in factorial of the number
  so let's just iterate on the numbers from 2 and n and see how much of 2,5 we have got
  *Note: we actually don't need to count the 2's since you can see that the number of 5's will always be the minumum so you can write a better
  code :)
  time: O(log n)
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
	ll cnt2=0,cnt5=0;
	ll p2=2,p5=5;
	while(p2<=n){
		cnt2+=n/p2;
		p2*=2;
	}
	while(p5<=n){
		cnt5+=n/p5;
		p5*=5;
	}
	cout<<min(cnt2,cnt5)<<'\n';
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
}
