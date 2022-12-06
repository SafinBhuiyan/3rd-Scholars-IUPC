#include <bits/stdc++.h>
using namespace std;
#define nl "\n";

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int i,n;
	bool is_prime=true;
	cin>>n;
	if(n==1){
		is_prime=false;
	}
	for (int i = 2; i < n; i++)
	{
		if(n%i==0){
				is_prime=false;
				break;}
	}
	if(is_prime){
		cout<<"Yes"<<nl;
	}
	 else cout<<"No"<<nl;

	return 0;
}
