/*--------------------------"DeveshSingh"------"Delhi Technological UNIVERSITY"--------*/
/*------------------------------Knowledge is power/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------Code is dope----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

signed main()
{

    // freopen("input.txt", "r", stdin);
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a = -1, b = -1, res = 0, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (a == -1)
            {
                a = temp;
                continue;
            }
            else if (b == -1)
            {
                b = temp;
                continue;
            }

            if (a != -1 and b != -1)
            {
                if (a > b)
                {
                    swap(a, b);
                }
                res += a;
                b -= a;
                cout << "te " << a << " " << b << " " << res << endl;

                a = temp;
            }
        }
        if (a != -1 and b != -1)
        {
            if (a > b)
            {
                swap(a, b);
            }
            res += a;
            b -= a;
            cout << "te " << a << " " << b << " " << res << endl;
        }
        cout << "te " << a << " " << b << " " << res << endl;

        res += max(a, b);
        cout << res << endl;
    }

    return 0;
}