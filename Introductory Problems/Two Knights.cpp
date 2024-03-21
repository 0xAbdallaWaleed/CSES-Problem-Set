/*
	let's approach this problem by:
	1-calc all the num of ways that we can place 2 knights -> all
	2-calc num of ways that these 2 knights can attack each other -> attack
	3-then just outpur all-attack
	
	*for step 1 we just get size*(siz-1) then we divide by two since there is no 
	difference between the two knights
	*for step 2 we can notice that for every 2*3 block there are two ways the the 
	knights can attack each other, same goes for 3*2 so we just add these together 
	to get all possible attack positions
	*how to know how mant 2*3 blocks are there in k*k grid? in terms of rows we can 
	take from row 1 to grid size - 1, and for columns we can take from 1 to size - 2
	same goes for 3*2 blocks
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
	rep(i,1,n+1){
		ll grid = i*i;
		ll all = grid*(grid-1)/2;
		ll attack = 4*(i-1)*(i-2);
		cout<<all-attack<<'\n';
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
