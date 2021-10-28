#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//버튼 A, B, C에 지정된 시간은 각각 5분, 1분, 10초이다.
int main() {
    int a = 300, b = 60, c = 10;
    int count_a = 0, count_b = 0, count_c = 0;
    int t;
    //5분 -> 300초 / 1분 -> 60초
    scanf("%d", &t);
    if (t >= 300) {
        while (t >= 300) {
            t -= a;
            count_a++;
        }
    }
    if (t < 300 && t >= 60) {
        while (t >= 60) {
            t -= b;
            count_b++;
        }
    }
    if (t < 60) {
        while (t >= 10) {
            t -= c;
            count_c++;
        }
    }

    if (t == 0) {
        printf("%d %d %d", count_a, count_b, count_c);
    }
    else if (t > 0) {
        printf("-1");
    }
}