// [C. Two Colors]
// [18/03/2025] - [17:02 GMT+7]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		long long n, m; cin >> n >> m;
		vector<long long> c(m);
		vector<long long> ss(m);
		for(int i = 0; i < m; i++){
			cin >> c[i];
			c[i] = min(c[i], n-1);
		}
	
		sort(c.begin(), c.end());
		partial_sum(c.rbegin(), c.rend(), ss.rbegin());
		
		unsigned long long ans = 0;
		for(int i = 0; i < m; i++){
			int ii = (lower_bound(c.begin(), c.end(), (n-c[i])) - c.begin());
			if(ii == m) continue;
			ans += (ss[ii]+(c[i]*(m-ii))-(n*(m-ii))+(m-ii));
			if(c[i]*2 >= n) ans -= (c[i]+c[i]-n+1);
		}
		cout << ans << nn;
	}
}
