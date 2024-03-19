/*
	-let's crate a frequency array of size n+1
	-while getting the numbers from the user let's assign "true" in the index of this
	number, so we know that this number is in the array
	-then loop on indexes [1,n] and check if the value of this index in the freq array is
	false then this number doesn't exist in the array
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
	int n; cin >> n;
	int freq[n+1]{0};
	rep(i,1,n){
		int x; cin >> x;
		freq[x]=true;
	}
	rep(i,1,n+1){
		if(!freq[i]){
			cout<<i<<'\n';
			break;
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
