// [A. Final Verdict]
// [11/03/2025] - [12:50 GMT+7]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;	
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];

		int sum = accumulate(a, a+n, 0);	
		double avg = (double)sum/n;

		if(avg == x) cout << "YES" << nn;	
		else cout << "NO" << nn;
	}
}
