/*
  if the length of the string is even then we can't have an odd occurrences for any character for obvious reasons 
  but if the length is odd then we can have only on character (and we put it in the middle)
  so we just count the frequency for each char and then construct the answer
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
	string s; cin >> s;
	int freq[26]{0};
	rep(i,0,sz(s))freq[s[i]-'A']++;
	int od = 0,idx;
	rep(i,0,26)if(freq[i]&1)od++,idx=i;
	if(od>2||(od&&!(sz(s)&1))){
		cout<<"NO SOLUTION\n";
		return;
	}
	char ans[sz(s)+1];
	int l = 0, r = sz(s)-1;
	rep(i,0,26){
		while(freq[i]>=2){
			ans[l++]=i+'A';
			ans[r--]=i+'A';
			freq[i]-=2;
		}
	}
	if(od)ans[sz(s)/2]=idx+'A';
	rep(i,0,sz(s))cout<<ans[i];
}
 
int main(){
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	rep(i,1,testcase+1){
		solve();
	}
} 	 		    			  	
