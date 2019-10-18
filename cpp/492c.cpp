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
	
    int n, r, avg, cg = 0, rg = 0, sum = 0;
    cin >> n >> r >> avg;
    vector<pair<ll, ll> > p;
    
    REP(i,0,n-1){
        int a, b;
        cin >> a >> b;
        p.pb(mp(b, r-a));
        cg += a;
    }
    sort(all(p));
    rg = n*avg - cg;
    if(rg <= 0){
       cout << 0;
        return 0;
    }
    REP(i,0,n-1){
        if(p[i].S > 0){
            if(rg > p[i].S){
                sum += p[i].S * p[i].F;
                rg -= p[i].S;
            }
            else{
                sum += p[i].F * rg;
                cout << sum;
                return 0;
            }
            
        }
    }
    
	return 0;
}