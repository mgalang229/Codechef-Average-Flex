#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			// count the numbers that are less than or equal to the current score
			// and check if this number is greater than the number of scores that
			// are greater than the current score
			for (int j = 0; j < n; j++) {
				cnt += (a[j] <= a[i]);
			}
			ans += (cnt > (n - cnt));
		}
		cout << ans << '\n';
	}
	return 0;
}
