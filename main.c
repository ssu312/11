//실습 1: 포인터 값
#include <stdio.h>
int main(void){
    int i = 10;
    char c = 'a';

    //포인트 변수 선언
    int *iptr;
    char *cptr;
    int *iptr2;

    iptr = &i;
    cptr = &c;

    iptr2 = iptr; //iptr자체가 메모리 주소를 저장하고 있으므로 & 안 붙여도 됨.

    printf("i : %p\n%p (size: %i)\n", iptr,&i,sizeof(iptr));
    printf("c : %p\n%p (size: %i)\n", cptr,&c,sizeof(cptr));
    printf("iptr2 : %p, %i\n", iptr2,*iptr2);

    return 0;
}
