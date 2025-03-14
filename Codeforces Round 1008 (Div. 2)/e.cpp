// [E. Finding OR Sum]
// [14/03/2025] - [17:37 GMT+7]
// JuanSign

#include <bits/stdc++.h>
using namespace std;

#define nn '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	unsigned int odd = 0, evn = 0;
	for(int i = 0; i < 30; i += 2) odd |= (1 << i);
	for(int i = 1; i < 30; i += 2) evn |= (1 << i);
 
	int t; cin >> t;
	while(t--){
		unsigned int v1, v2, m;
		
		cout << odd << endl;
		cin >> v1;
		cout << evn << endl;
		cin >> v2;	
		cout << '!' << endl;
		cin >> m;
	
		v1 -= (2*odd);
		v2 -= (2*evn);
		unsigned int sm = 0;
		int cnt[30] = {};
		for(int i = 0; i < 31; i++){
			if(v1 & (1 << i)){
				if(i%2){
					cnt[i] = 1;
					sm += (1 << i);
				}else{
					cnt[i-1] = 2;
					sm += (1 << i);
				}
			}
		}
		for(int i = 0; i < 31; i++){
			if(v2 & (1 << i)){
				if(i%2){
					cnt[i-1] = 2;
					sm += (1 << i);
				}else{
					cnt[i] = 1;
					sm += (1 << i);
				}
			}
		}
	
		for(int i = 0; i < 30; i++){
			if(m & (1 << i)){
				if(cnt[i] == 0) sm += (1 << (i+1));
				else if(cnt[i] == 1) sm += (1 << i);
			}
		}
	
		cout << sm << endl;
	}
}
