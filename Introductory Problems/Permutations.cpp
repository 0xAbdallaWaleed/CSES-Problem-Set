/*
	we can divide the problem into 3 cases
	1) n=1 then we can just print 1 since there is no adj elements anyway
	2) n<4 then we can see that there is no sollution exist
	3) n>4 then we can just start by printing the even numbers starting from 2 
	(the difference between	any of them is 2 which is vaild) then doing the same 
	withe the odd numbers starting with 1
	why is this always right? since we know for sure that n is at laest 4 then the
	last even number will be at least 4 and the fist odd number will be 1 and the
	difference between them is larger than 1
  time: O(n)
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
	if(n==1)cout<<1<<'\n';
	else if(n<4)cout<<"NO SOLUTION\n";
	else{
		for(int i = 2; i <= n; i+=2)cout<<i<<' ';
		for(int i = 1; i <= n; i+=2)cout<<i<<' ';
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
