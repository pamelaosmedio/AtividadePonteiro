#include <stdio.h>

int soma(int n1, int n2) 
{
  int resultado_soma;
  resultado_soma= n1 + n2;
  return(resultado_soma); 
}
int subtracao(int n1, int n2) 
{
  int resultado_subtracao;
  resultado_subtracao = n1 - n2;
  return(resultado_subtracao); 
}
int divisao(int n1, int n2) 
{
  int resultado_divisao;
  resultado_divisao = n1 / n2;
  return(resultado_divisao); 
}
int multiplicacao(int n1, int n2) 
{
  int resultado_multiplicacao;
  resultado_multiplicacao = n1 * n2;
  return(resultado_multiplicacao);
}
int main()
{
    int n1, n2, resultado_soma, resultado_subtracao, resultado_divisao, resultado_multiplicacao;
    int *p1, *p2;
    
    p1 = &n1;
    p2 = &n2;
    
    printf("Digite o primeiro número:");
    scanf("%d", p1);
    printf("Digite o segundo número:");
    scanf("%d", p2);
    
    
    printf("Soma dos valores: %d", soma(*p1,*p2));
    printf("\nSubtração dos valores: %d", subtracao(*p1,*p2));
    printf("\nDivisão dos valores: %d", divisao(*p1,*p2));
    printf("\nMultiplicação dos valores: %d", multiplicacao(*p1,*p2));
}