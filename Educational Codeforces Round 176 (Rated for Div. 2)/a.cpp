// [A. To Zero]
// [18/03/2025] - [00:59 GMT+7]
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

		int ans = 0;
		if(n%2){
			n = max(0, n-k);
			ans++;
		}
		k--;
		ans += ((n+k-1)/k);
		cout << ans << nn;
	}
}
