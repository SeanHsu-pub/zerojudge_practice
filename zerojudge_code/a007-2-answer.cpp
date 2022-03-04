#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
using namespace std;
#define fastio ios::sync_with_stdio(false), cin.tie(NULL)
typedef int64_t ll;
int FastPower(int a, int b, int m) {
	a %= m;
	int ans = 1;
	while(b) {
		if(b & 1)
			ans = ll(ans) * a % m;
		a = ll(a) * a % m;
		b >>= 1;
	}
	return ans;
}
bool solve(int n) {
	if(n <= 4)
		return n == 2 || n == 3;
	int N = n - 1, cnt = __builtin_ctz(N), m = N >> cnt;
	for(int a : {2, 7, 61}) {
		if(n == a)
			return true;
		int temp = FastPower(a, m, n);
		if(temp == 1 || temp == n - 1)
			continue;
		for(int t = 0; t < cnt; ++t) {
			temp = ll(temp) * temp % n;
			if(temp == 1)
				return false;
			if(temp == n - 1)
				break;
		}
		if(temp != n - 1)
			return false;
	}
	return true;
}
int main(void){
	fastio;
	int n;
	while(cin >> n){
		cout << (solve(n) ? "質數" : "非質數") << "\n";
	}
	return 0;
}
