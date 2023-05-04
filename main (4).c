#include <stdio.h>

int main()
{
    int n1, n2;
    int *p1, *p2;
    
    p1 = &n1;
    p2 = &n2;
    
    printf("Digite o primeiro valor:");
    scanf("%d", p1);
    printf("Digite o primeiro valor:");
    scanf("%d", p2);
    
    printf("Soma dos valores: %d + %d = %d \n",*p1, *p2, (*p1 + *p2));
    printf("Subtração dos valores: %d - %d = %d \n", *p1, *p2, (*p1 - *p2));
    printf("Divisão dos valores: %d / %d = %d \n", *p1, *p2, (*p1 / *p2));
    printf("Multiplicação dos valores: %d * %d = %d", *p1, *p2, (*p1 * *p2));
    return 0;
}
