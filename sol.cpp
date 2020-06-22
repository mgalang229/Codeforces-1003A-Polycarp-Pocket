#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[105], n; 

void decode() {
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		int x;
		cin >> x;
		a[x]++;
	}
	int ans = 0;
	for(int i = 1; i <= 100; ++i) {
		if(ans < a[i]) {
			ans = a[i];
		}
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
