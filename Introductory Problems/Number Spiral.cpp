/*
	we can notice that the numbers are arranging as rounds: 1^2 -> 2^2 -> 3^2 -> ...
	let X be the max(x,y), we can notice that:
		1-the starting number of the round is (x-1)^2+1
		2-if X is odd then the numbers for this round is starting in the bottom left
		3-else then numbers starings from the up right corner
	so we now know our initial number for this round and now we want only to see the 
	distance between our position and the starting point to know how many numbers
	in this round we had increase, and this can easly dony by observaion (looking at 
	the graph provided and try it)
 time:O(t) -> number of test cases as for each test case we only take O(1)
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
	ll x = max(a,b), d;
	if(x&1){
		if(a==x)d=b;
		else d=x+(x-a);
	}else{
		if(b==x)d=a;
		else d=x+(x-b);
	}
	cout << (x-1)*(x-1)+d << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
} 	 		    			  	
