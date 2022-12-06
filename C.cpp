#include <bits/stdc++.h>
using namespace std;
#define nl "\n";

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	// cin >> s;
	getline(cin, s);
	// cout << s << nl;
	unordered_set<char> st;
	for(auto c:s) {
		if((int)c >= 97 && (int)c <= 122) st.insert(c);
		// cout << c << nl;
		// cout << ((int)c) << nl;
	}

	cout << st.size() << nl;

	return 0;
}
