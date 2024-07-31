#include <stdio.h>

int main() {
	int n, numbers[101], cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] % 2 != 0) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}