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
		vector<int> freq(101);
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// count the frequency of every score
			freq[x]++;
		}
		int ans = 0;
		int cnt = 0;
		for (int i = 0; i <= 100; i++) {
			if (freq[i] != 0) {
				// since the sequence is sorted we just need to:
				// collect the frequency of the scores and
				// check if the scores that are less than or equal to the current
				// score is greater than the frequency of the scores that are 
				// greater than the current score
				// if yes, then add the frequency to the answer (frequency also
				// represents the no. of students who got this score)
				cnt += freq[i];
				if (cnt > n - cnt) {
					ans += freq[i];
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
