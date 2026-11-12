//실습 3: 포인터와 함수
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){  //x랑 y를 출력하려 할 때 매개변수에 포인터 변수를 넣음.
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}


void main(void){
    int a = 3;
    int b = 5;
    swap(&a,&b);

    printf("a: %i, b: %i\n", a,b);
}
