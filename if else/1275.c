#include <stdio.h>
#include <math.h> //pow ���� �������

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int jaegob = pow(n, k); //n�� k����

	printf("%d", jaegob);

	return 0;
}