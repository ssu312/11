//실습 2: 간접 참조 연산자
#include <stdio.h>
int main(void){
    int i = 300;
    
    int *pi = &i;
    char *pc = (char*)&i;


    printf("%i, %i, %i\n", i, *pi, *pc);


    return 0;
}
//결과: 300, 300, 44