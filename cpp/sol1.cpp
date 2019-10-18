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
// ___________________________________________________________________________________________________________________________________________________________

    int n;
    cin >> n;
    
    if(n == 4){
        cout << 12;
        return 0;
    }
    if(n == 3){
        cout << 6;
        return 0;
    }
    if(n == 2){
        cout << 2;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }
    else{
        if(n % 3 == 0){
            if(n % 2 == 0)
                cout << (n-1)*(n-2)*(n-3);
            else
                cout << (n)*(n-1)*(n-2);
        }
        else{
            if(n % 2 == 0)
                cout << (n)*(n-1)*(n-3);
            else
                cout << (n-1)*(n-2)*(n);
        }
    }
	return 0;
}