#include <stdio.h>

int main()
{
    int num=1, sum=0;

    while(num<=10)
    {
        sum +=num;
        num ++;
    }
    printf("1에서 10까지의 합 = %d\n",sum);
    printf("while문이 끝난 후의 값 =%d",num);
    
}