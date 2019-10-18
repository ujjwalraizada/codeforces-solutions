#include <bits/stdc++.h>
using namespace std;


#define int long long
#define double long double
#define pq priority_queue
#define pb push_back
#define mp make_pair

int root(int dsu[],int x)
{
  while(dsu[x]!=x)
  {
    dsu[x]=dsu[dsu[x]];
    x=dsu[x];
  }
  return x;
}

void init(int dsu[], int n)
{
  for(int i=0;i<=n;i++)
  {
    dsu[i]=i;
  }
}

void un(int dsu[],int x,int y)
{
  int a=root(dsu,x);
  int b=root(dsu,y);
  dsu[a]=dsu[b];
}

// void init(int dsu[],int size[],int n)
// {
//   for(int i=0;i<=n;i++)
//   {
//     dsu[i]=i;
//     size[i]=1;
//   }
// }

// int root(int dsu[],int x)
// {
//   while(dsu[x]!=x)
//   {
//     dsu[x]=dsu[dsu[x]];
//     x=dsu[x];
//   }
//   return x;
// }

// void un(int dsu[],int size[],int x,int y)
// {
//   int rootx=root(dsu,x);
//   int rooty=root(dsu,y);
//   if(size[rootx]<size[rooty])
//   {
//     dsu[rootx]=dsu[rooty];
//     size[rooty]+=size[rootx];
//   }
//   else
//   {
//     dsu[rooty]=dsu[rootx];
//     size[rootx]+=size[rooty];
//   }
// }

void printprecise(double l,int precision){
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l <<endl;
}

int gcd(int x,int y)
{
  if(x==0)
  {
    return y;
  }
  else
  {
    return gcd(y%x,x);
  }
}

int lcm(int x,int y)
{
  return (x*y)/gcd(x,y);
}

int great(int a,int b)
{
  if(a<b)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

void merge(int arr[],int start,int mid,int end)
{
  int p=start;
  int q=mid+1;
  int temp[end-start+1];
  int k=0;
  for(int i=start;i<=end;i++)
  {
    if(p>mid)
    {
      temp[k++]=arr[q++];
    }
    else if(q>end)
    {
      temp[k++]=arr[p++];
    }
    else if(arr[p]<arr[q])
    {
      temp[k++]=arr[p++];
    }
    else
    {
      temp[k++]=arr[q++];
    }
  }
  for(int i=0;i<=end-start;i++)
  {
    arr[i+start]=temp[i];
  }
}

void mergesort(int arr[],int start,int end)
{
  if(start<end)
  {
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
  }
}

int power(int x, int y, int p) 
{ 
  int res = 1; 
  x = x % p;
  while (y > 0) 
  {
    if (y & 1) 
    res = (res*x) % p;  
    y = y>>1; // y = y/2 
    x = (x*x) % p;   
  } 
  return res; 
} 


main() 
{

  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
  #ifndef ONLINE_JUDGE    
  freopen("input.txt", "r", stdin);    
  freopen("output.txt", "w", stdout);
  #endif

  int t;
  cin>>t;
  while(t--)
  {
    int h,n;
    cin>>h>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    arr[n]=0;
    int temp[n+1]={0};
    if(n==1)
    {
      cout<<0<<"\n";
      continue;
    }
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
      if(temp[i-1]==0)
      {
        temp[i]=1;
      }
      else if(temp[i-1]==1)
      {
        if(arr[i-1]!=arr[i]+1)
        {
          ans++;
          temp[i]=1;
        }
        else
        {
          temp[i]=0;
        }
      }
    }
    cout<<ans<<"\n";
  }

  #ifndef ONLINE_JUDGE
  cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
  #endif
}
 