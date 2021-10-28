#include <stdio.h>
int sugar(int number) {
    if(number < 3){ // 3보다 작으면 -1
        return -1;
    }
    if(number % 5 == 0){
        return number / 5;
    }else{// 싹다 5로 나눠주긴 하는데 나눠 떨어지지 않는 숫자들.
        if(number % 5 == 3){// 3일 경우..
            return number/5 + 1;// 그대로 1 더해주면 그만
        }else if(number % 5 == 1 || number % 5 == 4){// 1이나 4일 경우 -> 나머지에 5를 더하면 3의 배수가 됨.  
            if(number == 4) return -1; //4일때 -1리턴
            else return (number/5 - 1) + ((number%5 + 5) / 3);  //--> 5를 더한 숫자에 3으로 나눈 몫을 + 해서 리턴
        }else{
            if(number == 7) return -1;// 7일경우 -1 리턴
            else return (number/5 - 2) + ((number%5 + 10) / 3); // --> 10을 더한 후 3으로 나눈 몫을 + 해서 리턴
        }
    }
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