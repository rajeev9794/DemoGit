#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vii vector<pii>
#define vll vector<pll>
#define F first
#define S second
#define maxSize 100005
int max(int a,int b){return(a>b?a:b);}
int min(int a,int b){return((a<b)?a:b);}
int gcd(int a,int b)
{
    if(a==0)
       return b;
    else
      return gcd(b%a,a);
}
int Solution(vector<string> &v)
{
    int n=v.size();
    
}
int main()
{
#ifndef ONLINE_JUDGE   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif  
   int t;
   cin>>t;
   while(t--)
   {
     int m;
     cin>>m;  
     vector<string>v;
     string s;
     for(int i=0;i<m;i++)
     {
         cin>>s;
         v.push_back(s);
     }
     cout<<Solution(v)<<endl;
     
     
    }
}        