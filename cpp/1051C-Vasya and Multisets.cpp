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
    
    ll a,n,s,c=0,l=0,fl=0,ch=-1;
    cin>>n;
    vi v(101),u(n);
    f(n)
    {
      cin>>u[i];
      v[u[i]]++;
    }
    f(101)
    {
      if(v[i]==1)
        l++;
      if(v[i]>2)
        fl=1;
    }
    if(l%2!=0&&fl==0)
      {
        cout<<"NO";
        return 0;
      }
      else
        cout<<"YES\n";
      if(l%2==0)
      {
        f(n)
      {
        a=u[i];
        //cout<<"\n"<<a<<" "<<v[a]<<" "<<c<<"\n";
        if(v[a]>1)
          cout<<'A';
        else if(v[a]==1)
        {
          if(c<l/2)
          {
            cout<<'A';
            c++;
          }
          else
            cout<<'B';
        }
      }
    }
    else
    {
      f(n)
      {
        a=u[i];
        //cout<<"\n"<<a<<" "<<v[a]<<" "<<c<<"\n";
        if(v[a]>2)
        {
          if(ch==-1)
          {
            cout<<'A';
            ch=1;
          }
          else
            cout<<'B';
        }
        else if(v[a]==1)
        {
          if(c<l/2)
          {
            cout<<'A';
            c++;
          }
          else
            cout<<'B';
        }
        else
          cout<<'B';
      }
    }

return 0;
}