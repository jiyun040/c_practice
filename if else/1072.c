#include <stdio.h>

int main() {
	int n, numbers[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", numbers[i]);
	}

	return 0;
}