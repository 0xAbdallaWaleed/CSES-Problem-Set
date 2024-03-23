/*
  let X be that we subtract one from a and two from b
  let Y be the oppiste
  so we can see that:
    a = nX + 2nY
    b = 2nX + nY
    adding the two equation we get:
    a+b=3(nY+nY)
    *se a+b must be divisible by 3
  and second thing we can think about is that the max(a,b) must be less than or equal 2*min(a,b) since if we just keep subtracting 2 from the max
  and 1 from the min we can't subtract any number greter than 2*min -> will lead to negative number in the min
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
	ll a,b; cin >> a >> b;
	if((a+b)%3==0&&min(a,b)*2>=max(a,b))cout<<"YES\n";
	else cout<<"NO\n";
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
}
