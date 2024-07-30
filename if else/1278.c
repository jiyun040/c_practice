#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int cnt = 0;

	while (1) {
		if (n / 10 == 0) {
			cnt++;
			break;
		}
		else {
			n /= 10;
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}