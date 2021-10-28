#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long sum = 0, num;
	long my_sum = 0;
	int i;
	scanf("%ld", &my_sum);
	// 자연수 S(1 ≤ S ≤ 4,294,967,295)
	if (my_sum >= 1 && my_sum <= 4294967295) {
		for (i = 1; i <= my_sum; i++) {
			sum += i;
			if (my_sum >= sum && my_sum < sum + (i + 1)) {
				num = i;
				printf("%ld\n", num);
				break;
			}
		}
	}
	return 0;
}