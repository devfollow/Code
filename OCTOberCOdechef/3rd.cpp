#include <bits/stdc++.h>


using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)

// int a[123456],b[123456];

int main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	ll int t;
	cin>>t;
	while(t--){
		ll int n,k,i,j;
        cin>>n>>k;
        long long int a[n];
        f(i,0,n){
            cin>>a[i];
        }
        f(i,0,k){
            long long int p,q;
             p=i%n;
            q=n-(i%n)-1;
            long long int x=a[p],y=a[q];
            a[p]=x^y;  
        }
         f(i,0,n){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	}
	return 0;   
}
