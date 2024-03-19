/*
	-let's loop on the string [1,n) and check:
		if the char in this position equal the char in prev position then we on the 
			same seqcuenct and can increase it's length by one
		else
			we are starting a new sequence
		and we should keep trakining the length for each iteration and update the
		answer according to it
	*time complexity: O(|s|) -> size of the string
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
	string s; cin >> s;
	int n = sz(s),ans=1,cnt=1;
	rep(i,1,n){
		if(s[i]==s[i-1])cnt++;
		else cnt=1;
		ans=max(ans,cnt);
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
