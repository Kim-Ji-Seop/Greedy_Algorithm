#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define THREE 3
#define FIVE 5
// 1. 3의 배수 5의 배수 -> 단일숫자 처리
// 2. 3으로 나눈 나머지 -> 2일경우 한번을 덜 나누고 5로 채우면 됨
// 3. 5로 나눈 나머지 -> 1일 경우 한번을 덜 나누고 3을 두번채우면 됨
// 4. 5로 나누다가 나머지가 3이 나올경우 or 3으로 나누다가 나머지가 2가 나올경우
int sugar(int number)
{
    int tmp;
    if (number % FIVE == 4 && number > 5)
    {
        tmp = (number % FIVE) + FIVE;
        if (tmp % THREE == 0)
        {
            return (number / FIVE) - 1 + (tmp / THREE);
        }
        else
        {
            return -1;
        }
    }
    else if (number % FIVE == 3 && number > 5)
    {
        tmp = (number % FIVE);
        if (tmp % THREE == 0)
        {
            return (number / FIVE) + (tmp / THREE);
        }
        else
        {
            return -1;
        }
    }
    else if (number % FIVE == 2 && number > 10)
    {
        tmp = (number % FIVE) + FIVE * 2;
        if (tmp % THREE == 0)
        {
            return (number / FIVE) - 2 + (tmp / THREE);
        }
        else
        {
            return -1;
        }
    }
    else if (number % FIVE == 1 && number > 5)
    {
        tmp = (number % FIVE) + FIVE;
        if (tmp % THREE == 0)
        {
            return (number / FIVE) - 1 + (tmp / THREE);
        }
        else
        {
            return -1;
        }
    }
    else if (number % FIVE == 0 && number >= 5)
    {
        return (number / FIVE);
    }
    else if (number < 5)
    {
        if (number % THREE != 0)
        {
            return -1;
        }
        else
        {
            return (number / THREE);
        }
    }
    return -1;
}
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 3 && num <= 5000)
    {
        printf("%d\n", sugar(num));
    }
}