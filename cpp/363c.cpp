#include<bits/stdc++.h>
using namespace std;

//
//    __Vladimir__
//
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
#define f(n) for(long long i = 0; i<n; i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define sz(a) int((a).size())
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() {

	//Using text files for input output
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

	IOS;
// *------------------------------------------------------------------------------------------
	int c = 0;
	string s;
	vector <pair <int, char> > v;
	cin >> s;
	int len = s.length();
	char ch = s[0];
	REP(i,0,len){
	    if(ch == s[i]){
	        c++;
	    }
	    else{
	        if(c >= 2)
	            v.pb(mp(2, s[i-1]));
	        else
	            v.pb(mp(c,s[i-1]));
	        c = 1;
	        ch = s[i];
	    }
	}
	len = v.size();
	
	REP(i,0,len-1){
	    if(v[i].F == 2){
	        v[i+1].F = 1;
	        cout << v[i].S << v[i].S;
	    }
	    else{
	        cout << v[i].S;
	    }
	}
	return 0;
}