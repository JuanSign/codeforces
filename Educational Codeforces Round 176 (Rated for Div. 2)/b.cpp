// [B. Array Recoloring]
// [18/03/2025] - [01:08 GMT+7]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
	
		if(k == 1){
			if(n == 2) cout << (a[0] + a[1]) << nn;
			else{
				long long ans1 = a[(max_element(a+1, a+(n-1))-a)] + max(a[0], a[n-1]);
				long long ans2 = a[0] + a[n-1];
				cout << max(ans1, ans2) << nn;
			}
		}else{
			long long ans = 0;
			sort(a, a+n, greater<int>());
			for(int i = 0; i <= k; i++) ans += a[i];
			cout << ans << nn;
		}
	}
}



