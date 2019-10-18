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
	
	int a, b, c;
	int s1 = 0, s2 = 0, s3 = 0;
	cin >> a >> b >> c;
	s1 = a/3 + b/3 + c/3;
	if(a > 0 and b > 0 and c > 0)
	    s2 = (a-1)/3 + (b-1)/3 + (c-1)/3 + 1;
	if(a > 2 and b > 2 and c > 2)
	    s3 = (a-2)/3 + (b-2)/3 + (c-2)/3 + 2;
	
	cout << max(max(s1, s2), s3);
	
	return 0;
}