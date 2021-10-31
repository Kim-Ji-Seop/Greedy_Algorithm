#include <stdio.h>

int main() {
	long sum = 0, num;
	long my_sum = 0;
	int i;
	scanf("%ld", &my_sum);
	// 자연수 S(1 ≤ S ≤ 4,294,967,295)
	if (my_sum >= 1 && my_sum <= 4294967295) {
		for (i = 1; i <= my_sum; i++) {// 제일 최솟값(1)부터 올라간다. 최대한 많은 갯수를 뽑아내야 하기 때문. 그리고 1씩 올려줘야함. 많은수를 뽑기위해.
			sum += i;
			if (my_sum >= sum && my_sum < sum + (i + 1)) {// 입력한 수  >= sum 이고 입력한 수 < sum + (i + 1) 
			                                              // => sum이 중복한 수를 더하지 않으려면 sum + (i+1)이라는 처리를 해줘야 한다. 
				num = i;  // 따라서 중복한 수를 더해야만 my_num == num 이 되는 경우이면 그 i까지가 최대라는 것.
				printf("%ld\n", num);
				break;
			}
		}
	}
	return 0;
}