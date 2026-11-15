#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
 
 
void solve()
{
	int n;
	ll k;
 
	cin >> n >> k;
 
	vector<ll> A(n), B(n), C(n);
 
	ll sabseChota = LLONG_MAX;
 
	for(int i=0; i<n; i++)
	{
		cin >> A[i] >> B[i]
         >> C[i];
 
		sabseChota = min(
		                 sabseChota,
		                 A[i] + B[i] + C[i]
		             );
	}
 
 
	// kya target S possible hai?
	auto hoSaktaHai = [&](ll target) -> bool
	{
		ll totalCost = 0;
 
		for(int i=0; i<n; i++)
		{
			ll a = A[i];
			ll b = B[i];
			ll c = C[i];
 
			ll currentSum = a + b + c;
 
			if(currentSum >= target)
				continue;
 
			ll kami = target - currentSum;
 
			ll kharcha;
 
			if(!(a <= b && b <= c))
			{
				// direct +1 moves
				kharcha = kami;
			}
			else
			{
				if(a == b && b == c)
					return false;
 
				kharcha =
				    kami +
				    2 * (min(b-a, c-b) + 1);
			}
 
			totalCost = totalCost + kharcha;
 
			if(totalCost > k)
				return false;
		}
 
		return true;
	};
 
 
	ll left = sabseChota;
	ll right = sabseChota + k;
 
 
	while(left < right)
	{
		ll mid =
		    left + (right - left + 1) / 2;
 
		if(hoSaktaHai(mid))
			left = mid;
		else
			right = mid - 1;
	}
 
 
	cout << left << '
';
}
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int testCases;
	cin >> testCases;
 
	while(testCases--)
	{
		solve();
	}
 
	return 0;
}