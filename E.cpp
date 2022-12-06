#include <bits/stdc++.h>
using namespace std;
#define nl "\n";

bool palin(int X) {
	int revX = 0, tmpx = X;
	while(X > 0) {
		revX = 10 * revX + (X % 10);
		X/= 10;

	}
	return (tmpx == revX);
}

bool prime(int X) {
	if(X == 1) return 0;
	for(int i = 2; i <= sqrt(X); i++) {
		if(X % i == 0) return 0;
	}
	return 1;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(true) {
		if(palin(t) && prime(t)) {
			cout << t;
			break;
		}
		t++;
	}


	return 0;
}
