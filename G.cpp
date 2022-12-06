#include <bits/stdc++.h>
using namespace std;
#define nl "\n";

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int rd, av;
	cin >> rd >> av;
	vector<int> mins;
	while(rd--) {
		vector<int> v;
		int i = av;
		while(i--) {
			int n;
			cin >> n;
			v.push_back(n);
		}
		int min = *min_element(v.begin(), v.end());
		mins.push_back(min);
	}
	int max = *max_element(mins.begin(), mins.end());
	cout << max;

	return 0;
}
