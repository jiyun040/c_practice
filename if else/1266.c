#include <stdio.h>

int main() {
	int i, n;
	scanf("%d", &n);
	int numbers[1001], sum = 0;
	
	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	printf("%d", sum);

	return 0;
}