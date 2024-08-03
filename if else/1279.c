#include <stdio.h>

int main() {
	int a, b;
	int result = 0;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			result -= i;
		}
		else if (i % 2 != 0) {
			result += i;
		}
	}
	printf("%d", result);

	return 0;
}