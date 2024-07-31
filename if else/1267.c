#include <stdio.h>

int main() {
	int n, numbers[1000], sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] % 5 == 0) {
			sum += numbers[i];
		}
	}
	printf("%d", sum);

	return 0;
}