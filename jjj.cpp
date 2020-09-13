#include <bits/stdc++.h> // Include every standard library
using namespace std;
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
#define FOREACH(a, b) for (auto&(a) : (b))
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define sqr(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define sort(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define TC(t) while (t--)
#define ms(s, n) memset(s, n, sizeof(s))
#define f(i, a, b) for (int i = (a); i <(b); i++)
#define FORn(i, a, b) for (int i = (a); i <= (b); i++
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define size(a) int((a).size())
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<ll> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int MOD2 = MOD + 2; //1007681537;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const ld PI = acos((ld) - 1);
const ld EPS = 1e-9;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> inline int chkmin(T& a, const T& val) {return val < a ? a = val, 1 : 0;}
template<class T> inline int chkmax(T& a, const T& val) {return a < val ? a = val, 1 : 0;}
inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while (r * r > k) r--; return r;}
inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while (r * r * r > k) r--; return r;}
inline void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
inline void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
inline int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
inline int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
inline int sign(ld x) {return x < -EPS ? -1 : x > +EPS;}
inline int sign(ld x, ld y) {return sign(x - y);}
int modulo(int a, int b) { return (a % b + b) % b; }
#define db(x) cerr << #x << " = " << (x) << " ";


int main()
{
	ll i;
cin>>i;

	 if (i<=1)
  {
    cout<<i;
    return 0;
  }
   int  comb=1;
  int factor=1;
  vector<ll>v(i);
  ll j;
 for(j=0;j<i;j++){
  
    int x;
    cin>>x;
    v.push_back(x);
   
}

int grp;
grp=0;
j=1;
 vector<int>k;
 for(int h=0;h<=3;h++){
 	k.push_back(h);
 }
 ll term=1;
 int p;
   for(int p; p<=i;p++)
  {
    comb=comb*p;
int s=1;
    for(int l=1;l<=j; j++ )
    {
      grp= grp+comb/term;
      s=j+1;
      term=s*term;
    }

  }
  	bool flag=false;
	if(i%2==0)
	flag=true;
	if(flag==true)
	grp=grp-1;
 grp=grp-i;
 double d=grp/comb;
  cout<< setprecision(3)<<d;
  return 0;

}
