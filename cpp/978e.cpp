#include<bits/stdc++.h>
using namespace std;

//
//    __Vladimir__
//

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

int main() {

	//Using text files for input output
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

	//FastIO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//____________________________________________________________________________________
	ll n,w,sum = 0, left, right;
	cin >> n >> w;
	vll v(n,0),c(n,0);
	REP(i,0,n-1){
	    cin >> v[i];
	    sum += v[i];
	    c[i] = sum;
	}
	sort(all(c));
	ll Min = c[0];
	ll Max = c[n-1];
	Min = max(0LL,-1*Min);
	Max = max(0LL,Max);
	//cout << "MIN " << Min << endl;
	//cout << "MAX " << Max << endl;
	 left = Min;
	 right = w-Max;
	 
	 if(Min > w ){
	     cout << 0;
	     return 0;
	 }
	
	ll ans = right - left + 1;
	cout << max(ans,0LL);
	return 0;
}