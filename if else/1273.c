#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (N == i * j) {
				printf("%d ", i);
			}
		}
	}

	return 0;
}