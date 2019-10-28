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
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

void printprecise(double l,ll precision)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}

int main()

{
   
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
    #ifndef ONLINE_JUDGE    
    freopen("input.txt", "r", stdin);    
    freopen("output.txt", "w", stdout);
    #endif
    ll n,k;
    cin>>n>>k; 
    ll ip=n,i0=n,s=0;   
    vi v(n);
    f(n)
    {
      cin>>v[i];   
      if(ip==n&&v[i]>0)
         ip=i;      
      if(i0==n&&v[i]==0)
         i0=i;     
      
    }
    if(i0!=n)
    {
      
      ll t=min(k,i0);
      f(t)
      {
         s+=(-1*v[i]);
      }      
      fi(t,n)
      {
         s+=v[i];
      }

    }
    else
    {

      ll t=min(k,ip);      
      f(t)
      {
         s+=(-1*v[i]);
      }
      
      fi(t,n)
      {
         s+=v[i];
      }
      //cout<<s<<"\n";      
      if(k>ip&&(k-ip)%2!=0)
      {         
            if(ip==n)
               s+=(2*v[ip-1]);
            else if (ip==0)            
               s-=2*v[0];             
            else
            s-=(2*min(v[ip],-1*v[ip-1]));
      }
      
   }

   cout<<s;

return 0;
}