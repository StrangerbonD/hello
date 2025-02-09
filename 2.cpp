#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define         int             long long
#define         all(v)          v.begin(),v.end()
#define         rall(v)         v.rbegin(),v.rend()
#define         mem(a, x)       memset(a, x, sizeof(a))
#define         inf             1000000000000000000
#define         pb              push_back
#define         sz              size()
#define         yes             cout<<"YES"<<endl
#define         no              cout<<"NO"<<endl



template <typename T> T gcd(T a, T b){return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a, T b){return a*(b/gcd(a,b));}

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int mod=1000000007;
const int MAX=1005;
string s[MAX];
void testCase(){
   int n;cin>>n;
   vector<int>a(n),b(n);
   map<int,int>mp,d;
   for(int &i:a)cin>>i;
   for(int &i:b)cin>>i;
   for(int i=0;i<n;i++){
    mp[i+1]=b[i];
    d[b[i]]=a[i];
   }
   for(int i=1;i<=n;i++)cout<<mp[d[i]]<<" ";
   cout<<"This is very important";

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;//cin>>tc;
    while (tc--) {
        testCase();
        //cout<<"EH"<<endl;
    }
}