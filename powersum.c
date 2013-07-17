#include <stdio.h>

int main(int argc, char *argv[]) {
	int x = 512, p = 1000;
	int a[x];
	a[0] = 2;
	int i;
	for (i = 0; i < x; i++) {
		a[i] = 0;
	}
	a[0] = 2;
	for (i = 2; i <= p; i++) {
		int r = 0;
		int j, b;
		for (j = 0; j < x; j++) {
			b = (a[j] * 2) + r;
			if (b > 9) {
				b = b - 10;
				r = 1;
			}
			else {
				r = 0;
			}
			a[j] = b;
		}
	}
	int b = 0;
	for (i = 0; i < x; i++) {
		b += a[i];
	}
	printf("%d\n",b);
}

