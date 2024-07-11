#include <stdio.h>

long long int n;

long long int f(long long int n)
{
	long long int recursive = 0;
	while (n != 0)
	{
		recursive = recursive * 10 + n % 10;
		n /= 10;
	}
	return recursive;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}