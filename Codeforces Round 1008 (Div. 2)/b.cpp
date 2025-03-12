// [B. Vicious Labyrinth]
// [11/03/2025] - [13:05 GMT+7]
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
	
		if(k%2){
			for(int i = 1; i <= n; i++){
				if(i == n) cout << n-1 << " ";
				else cout << n << " ";
			}
		}else{
			for(int i = 1; i <= n; i++){
				if(i == n-1) cout << n << " ";
				else cout << n-1 << " ";
			}
		}
		cout << nn;
	}
	
}
