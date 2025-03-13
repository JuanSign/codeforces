// [C. Breach of Faith]
// [11/03/2025] - [13:49 GMT+7]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<long long> a(2*n+1);
		for(int i = 1; i <= 2*n; i++) cin >> a[i];

		sort(a.begin()+1, a.begin()+(2*n+1), greater<long long>());
		swap(a[0], a[1]);
		int rem = a[0]+a[2];
		for(int i = 3; i <= 2*n; i += 2){
			rem -= (a[i]-a[i+1]);
		}
		a[1] = rem;
		
		for(long long i : a) cout << i << " ";
		cout << nn;
	}
}
