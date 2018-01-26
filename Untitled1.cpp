#include <cstdio>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <bitset>
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define lowbit(x) x&(-x)
#define PA pair<int, int>
#define MK make_pair
using namespace std;
typedef long long LL;
inline LL read()
{
	LL l = 0, f = 1;
	char a = getchar();
	for (; a < '0' || a > '9'; a = getchar())
		if (a == '-') f = -1;
	for (; a >= '0' && a <= '9'; a = getchar())
		l = l*10+a-48;
	return l*f;
}
const LL p = 1e9;
LL q, k, a, b, sum;
int main()
{
	q = read();
	while(q--)
	{
		k = read(), a = read(), b = read();
		sum = 0;
		for (LL i = 1; i <= b; ++i)
		{
			sum = (sum+(b-i+1)%p*i%p)%p;
			i *= k;
		}
		for (LL i = 1; i < a; ++i)
		{
			sum = (sum-(a-1-i+1)%p*i%p+p)%p;
			i *= k;
		}
		printf("%lld\n", sum%p);
	}
	return 0;
}
