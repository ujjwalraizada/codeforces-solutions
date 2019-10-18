#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define ntq(z)  long long int z; cin>>z; for(long long int i=0;i<z;i++)
#define fi(x9,y9) for(long long int i=x9;i<y9;i++)
#define f(z9) for(long long int i=0;i<z9;i++)

typedef vector< ll > vi;
typedef vector< pair<ll,ll> > vp;
typedef vector< vi > vvi;
typedef pair< ll,ll > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

void printprecise(double l,ll precision)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}

ll gcd(ll a,ll b)
{
  if(a<b)
  {
    swap(a,b);
  }
  if(a%b==0)
    return b;
  else
    return gcd(b,a%b);
}
int main()
{
   
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
    #ifndef ONLINE_JUDGE    
    freopen("input.txt", "r", stdin);    
    freopen("output.txt", "w", stdout);
    #endif   
    
    ll n,q,l,r,s=0;
    cin>>n>>q;
    vi v(n+2),a(n+1);
    f(n)
    cin>>a[i];
    sort(all(a));
    f(q)
    {
      cin>>l>>r;
      v[l]++;
      v[r+1]--;
    }
    fi(1,n+1)   
    v[i]+=v[i-1];
    sort(all(v)-1);
    f(n+1)
    s+=a[i]*v[i];
    cout<<s;
    
return 0;
}