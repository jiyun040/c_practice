#include <stdio.h>
#include <math.h> //pow 위한 헤더파일

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int jaegob = pow(n, k); //n의 k제곱

	printf("%d", jaegob);

	return 0;
}