#include <stdio.h>
int sugar(int number) {
    int count = 0;
    while(number > 0){
        if(number % 5 == 0){
            return count + number/5;
        }
        number -= 3;
        count++;
    }
    if(number == 0) return count;
    else return -1; 
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