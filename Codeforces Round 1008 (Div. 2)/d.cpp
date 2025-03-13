// [D. Scammy Game Ad]
// [13/03/2025] - [09:30 GMT+7]
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
		pair<pair<int, int>, pair<int, int>> level[n];		
		for(int i = 0; i < n; i++){
			char s1, s2;
			int v1, v2;
			cin >> s1 >> v1 >> s2 >> v2;
			level[i].first.first = (s1 == 'x')? (v1-1) : 0;
			level[i].first.second = (s1 == '+')? v1 : 0;
			level[i].second.first = (s2 == 'x')? (v2-1) : 0;
			level[i].second.second = (s2 == '+')? v2 : 0;
		}
		long long A = 1, B = 1, C = 0;
		for(int i = n-1; i >= 0; i--){
			long long X = max(A, B);
			A += (level[i].first.first*X);
			B += (level[i].second.first*X);
			C += ((level[i].first.second + level[i].second.second)*X);
		}
		cout << A+B+C << nn;
	}
}
