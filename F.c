#include <stdio.h>
#define N 1000002
double ans[N];
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int T, t=0, n;
	for(int i=1; i<N*100-10; i++)
	{
		ans[i/100+1]+=1.0/i;
		if(i%100==0)
		{
			ans[i/100+1]+=ans[i/100];
			ans[i/100]+=1.0/i;
		}
	}
		
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		double sum=0;
		for(int i=n/100*100+1; i<=n; i++) 
			sum+=1.0/i;
		printf("Case %d: %.10lf\n", ++t, sum+ans[n/100]);
	}
	return 0;
}
