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
 
  int n;
  cin>>n;
  int arr[n];
  int cnt=0;
  int tot=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]%2==0)
    {
      cout<<arr[i]/2<<"\n";
      tot+=0;
      continue;
    }
    int a=floor((double)arr[i]/2);
    int b=ceil((double)arr[i]/2);
    if(arr[i]<0)
    {
      a=-1;
      b=1;
    }
    else
    {
      a=1;
      b=-1;
    }
    if(abs(tot+a/abs(a))<=abs(tot+b/abs(b)))
    {
      cout<<arr[i]/2+a<<"\n";
      tot+=a/abs(a);
    }
    else
    {
      cout<<arr[i]/2<<"\n";
      tot+=b/abs(b);
    }
  }
  // cout<<tot<<"\n";
 
  #ifndef ONLINE_JUDGE
  cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
  #endif
}